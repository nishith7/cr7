using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace HotelManagementSystem.AllUserControls
{
    

    public partial class CustomerDetails : UserControl
    {
        function fn = new function();
        String query;
        public CustomerDetails()
        {
            InitializeComponent();
        }

        private void gunaDataGridView2_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {
           

        }

        private void CustomerDetails_Load(object sender, EventArgs e)
        {

        }

        private void label2_Click(object sender, EventArgs e)
        {

        }

        private void gunaComboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if(txtSearchBy.SelectedIndex == 0)
            {
                query = "select mycustomer.cid,mycustomer.cname,mycustomer.mobile, mycustomer.nationality,mycustomer.gender,mycustomer.dob,mycustomer.idproof,mycustomer.addres,mycustomer.checkin,mycustomer.checkout,rooms.roomNo,rooms.roomType,rooms.bed,rooms.price from mycustomer inner join rooms on mycustomer.roomid = rooms.roomid";
                getRecord(query);
            }
            else if(txtSearchBy.SelectedIndex == 1)
            {
                query = "select mycustomer.cid,mycustomer.cname,mycustomer.mobile, mycustomer.nationality,mycustomer.gender,mycustomer.dob,mycustomer.idproof,mycustomer.addres,mycustomer.checkin,mycustomer.checkout,rooms.roomNo,rooms.roomType,rooms.bed,rooms.price from mycustomer inner join rooms on mycustomer.roomid = rooms.roomid where checkout is null";
                getRecord(query);
            }
            else if(txtSearchBy.SelectedIndex == 2)
            {
                query = "select mycustomer.cid,mycustomer.cname,mycustomer.mobile, mycustomer.nationality,mycustomer.gender,mycustomer.dob,mycustomer.idproof,mycustomer.addres,mycustomer.checkin,mycustomer.checkout,rooms.roomNo,rooms.roomType,rooms.bed,rooms.price from mycustomer inner join rooms on mycustomer.roomid = rooms.roomid where checkout is not null";
                getRecord(query);
            }

        }
        private void getRecord(String query1)
        {
            DataSet ds = fn.getData(query1);
            gunaDataGridView2.DataSource = ds.Tables[0];
        }
    }
}
