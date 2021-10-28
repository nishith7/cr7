import { Form, Row, Col, Button } from 'react-bootstrap';
// import { FiLogIn } from 'react-icons/fi'
import {authenticateSignup} from '../../service/service';
import {useState} from 'react';
import { useHistory } from 'react-router-dom';
import React from 'react';


const signupInitialValues = {
    username: '',
    password: '',
    phone: '',
    email: ''
};


const Signup = () => {

    const [signup, setSignup] = useState(signupInitialValues);

    const onInputChange = (e) => {
        console.log(signup);
        setSignup({ ...signup, [e.target.name]: e.target.value });
    }

    const history = useHistory();
    
    const clickHandler = async () => {
        // alert(login);
        let response = await authenticateSignup(signup);
        // alert(response);
        
        
        //alert("signup successfully");
        console.log(signup);
        setSignup(signup);
        // history.push("/login");
    }

    return (
      <div style={{ display: 'block', 
      width: '70%',
      margin: '100px auto',
      borderRadius: '15px',
      background: 'blue',
      padding: 30,
      }} className="col-8">
          <h4 style={{color: 'black', display:'flex', justifyContent: "center", alignItems: "center", marginBottom: 15}}>
              {/* <FiLogIn style={{color: '#ffffff', fontSize: 30}} className="mr-2"/>*/}
              SignUp
          </h4>
          <Form>
              <Row xs={1} md={1} style={{justifyContent: 'center', alignItems: 'center'}}>
                  <Form.Group as={Col}>
                      <Form.Label style={{fontSize: 20, color: 'black'}}>
                          <span>User Name</span>
                      </Form.Label>
                      <Form.Control onChange={(e) => onInputChange(e)} value={signup.username} name="username" type="text" placeholder="Enter User Name"/>
                  </Form.Group>
              </Row>
              <Row xs={1} md={2} style={{justifyContent: "center", alignItems: "center"}}>
                  <Form.Group as={Col}>
                      <Form.Label style={{fontSize: 20, color: 'black'}}>
                          <span>Password</span>
                      </Form.Label> 
                      <Form.Control onChange={(e) => onInputChange(e)} value={signup.password} name="password" type="password" placeholder="Enter Password"/>
                  </Form.Group>
                  <Form.Group as={Col}>
                      <Form.Label style={{fontSize: 20, color: 'black'}}>
                          <span>Phone Number</span>
                      </Form.Label>
                      <Form.Control onChange={(e) => onInputChange(e)} value={signup.phone} name="phone" type="text" placeholder="Enter Phone Number"/>
                  </Form.Group>
              </Row>
              <Row xs={1} md={2} style={{justifyContent: "center", alignItems: "center"}}>
              <Form.Group as={Col}>
                  <Form.Label style={{fontSize: 20, color: 'black'}}>
                      <span>Email</span>
                  </Form.Label>
                  <Form.Control onChange={(e) => onInputChange(e)} value={signup.email} name="email" type="text" placeholder="Enter Email Address"/>
              </Form.Group>
              </Row>
              <Row style={{justifyContent: "center", alignItems: "center"}}>
                  <Button size="lg" variant="success" onClick={() => clickHandler()} style={{ marginTop: 20}}>
                      SignUp
                  </Button>
              </Row>
          </Form>
      </div>
  ) 
}
    

export default Signup;