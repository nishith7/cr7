import mongoose from 'mongoose';

const user = new mongoose.Schema( {
    username: {
        type: String,
        required: true,
        trim: true,
        unique: true,
        index: true,
        lowercase: true
    },
    password: {
        type: String,
        required: true
    },
    phone: {
        type: String
    },
    email: {
        type: String,
        required: true,
        trim: true,
        unique: true,
        lowercase: true
    }
});


const User=mongoose.model('User', user);

export default User;
