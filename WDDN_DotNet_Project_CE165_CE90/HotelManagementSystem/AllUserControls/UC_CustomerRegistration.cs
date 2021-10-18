﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Data.SqlClient;

namespace HotelManagementSystem.AllUserControls
{
    public partial class UC_CustomerRegistration : UserControl

    {
        function fn = new function();
        String query;


        public UC_CustomerRegistration()
        {
            InitializeComponent();
        }

        private void txtRoomNo_TextChanged(object sender, EventArgs e)
        {

        }

        private void gunaGradientButton1_Click(object sender, EventArgs e)
        {
            if(txtName.Text != "" && txtContact.Text != "" && txtNationality.Text != "" && txtGender.Text != "" && txtDob.Text != "" && txtIdproof.Text != "" 
                && txtAddress.Text != "" && txtCheckin.Text != "" && txtPrice.Text != "")
            {
                String name = txtName.Text;
                Int64 mobile = Int64.Parse(txtContact.Text);
                String national = txtNationality.Text;
                String gender = txtGender.Text;
                String dob = txtDob.Text;
                String idproof = txtIdproof.Text;
                String address = txtAddress.Text;
                String checkin = txtCheckin.Text;

                query = "insert into mycustomer(cname,mobile,nationality,gender,dob,idproof,addres,checkin,roomid) values('"+name+"',"+mobile+",'"+national+"','"+gender+"','"+dob+"','"+idproof+"','"+address+"','"+checkin+"',"+rid+") update rooms set booked='YES' where roomNo='"+txtRoomNo.Text+"'";
                fn.setData(query, "Room No:" + txtRoomNo.Text + " Allocation Successful.");
                ClearAll();

            }
            else
            {
                MessageBox.Show("All fields are mandatory", "Information !!", MessageBoxButtons.OK, MessageBoxIcon.Information); 
            }
        }

        private void UC_CustomerRegistration_Load(object sender,EventArgs e)
        {

        }
        public void setComboBox(String query,ComboBox combo)
        {
            SqlDataReader sdr = fn.getForCombo(query);
            while (sdr.Read())
            {
                for(int i = 0; i < sdr.FieldCount; i++)
                {
                    combo.Items.Add(sdr.GetString(i));

                }
            }
            sdr.Close();
        }

        

        private void txtBed_SelectedIndexChanged(object sender, EventArgs e)
        {
            txtRoom.SelectedIndex = -1;
            txtRoomNo.Items.Clear();
            txtPrice.Clear();
        }

        private void txtRoom_SelectedIndexChanged(object sender, EventArgs e)
        {
            txtRoomNo.Items.Clear();
            txtPrice.Clear();
            query = "select roomNo from rooms where bed = '" + txtBed.Text + "'and roomType='" + txtRoom.Text + "'and booked = 'NO'   ";
            setComboBox(query, txtRoomNo);

        }
        int rid;
        private void txtRoomNo_SelectedIndexChanged(object sender, EventArgs e)
        {
            query = "select price,roomid from rooms where roomNo = '" + txtRoomNo.Text + "'";
            DataSet ds = fn.getData(query);
            txtPrice.Text = ds.Tables[0].Rows[0][0].ToString();
            rid = int.Parse(ds.Tables[0].Rows[0][1].ToString());

        }
        
        public void ClearAll()
        {
            txtName.Clear();
            txtContact.Clear();
            txtNationality.Clear();
            txtGender.SelectedIndex = -1;
            txtDob.ResetText();
            txtIdproof.Clear();
            txtAddress.Clear();
            txtCheckin.ResetText();
            txtBed.SelectedIndex = -1;
            txtRoom.SelectedIndex = -1;
            txtRoomNo.Items.Clear();
            txtPrice.Clear();



        }

        private void UC_CustomerRegistration_Leave(object sender, EventArgs e)
        {
            ClearAll();
        }
    }
}
