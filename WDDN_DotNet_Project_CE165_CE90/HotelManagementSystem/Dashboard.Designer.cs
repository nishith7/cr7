
namespace HotelManagementSystem
{
    partial class Dashboard
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.components = new System.ComponentModel.Container();
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Dashboard));
            this.panel1 = new System.Windows.Forms.Panel();
            this.MovingPanel = new Guna.UI.WinForms.GunaGradientPanel();
            this.btnAddRoom = new Guna.UI.WinForms.GunaButton();
            this.btnEmployee = new Guna.UI.WinForms.GunaButton();
            this.btnCustomerDetails = new Guna.UI.WinForms.GunaButton();
            this.btnCheckOut = new Guna.UI.WinForms.GunaButton();
            this.btnCustomerRegistration = new Guna.UI.WinForms.GunaButton();
            this.panel2 = new System.Windows.Forms.Panel();
            this.gunaElipse1 = new Guna.UI.WinForms.GunaElipse(this.components);
            this.gunaElipse2 = new Guna.UI.WinForms.GunaElipse(this.components);
            this.gunaElipse4 = new Guna.UI.WinForms.GunaElipse(this.components);
            this.gunaElipse3 = new Guna.UI.WinForms.GunaElipse(this.components);
            this.gunaElipse5 = new Guna.UI.WinForms.GunaElipse(this.components);
            this.customerDetails1 = new HotelManagementSystem.AllUserControls.CustomerDetails();
            this.uC_CustomerCheckOut1 = new HotelManagementSystem.AllUserControls.UC_CustomerCheckOut();
            this.uC_CustomerRegistration2 = new HotelManagementSystem.AllUserControls.UC_CustomerRegistration();
            this.uC_CustomerRegistration1 = new HotelManagementSystem.AllUserControls.UC_CustomerRegistration();
            this.uC_AddRoom1 = new HotelManagementSystem.AllUserControls.UC_AddRoom();
            this.uC_Employee1 = new HotelManagementSystem.AllUserControls.UC_Employee();
            this.panel1.SuspendLayout();
            this.panel2.SuspendLayout();
            this.SuspendLayout();
            // 
            // panel1
            // 
            this.panel1.BackColor = System.Drawing.Color.Transparent;
            this.panel1.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.panel1.BorderStyle = System.Windows.Forms.BorderStyle.Fixed3D;
            this.panel1.Controls.Add(this.MovingPanel);
            this.panel1.Controls.Add(this.btnAddRoom);
            this.panel1.Controls.Add(this.btnEmployee);
            this.panel1.Controls.Add(this.btnCustomerDetails);
            this.panel1.Controls.Add(this.btnCheckOut);
            this.panel1.Controls.Add(this.btnCustomerRegistration);
            this.panel1.Location = new System.Drawing.Point(67, 12);
            this.panel1.Name = "panel1";
            this.panel1.Size = new System.Drawing.Size(1416, 130);
            this.panel1.TabIndex = 0;
            this.panel1.Paint += new System.Windows.Forms.PaintEventHandler(this.panel1_Paint);
            // 
            // MovingPanel
            // 
            this.MovingPanel.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("MovingPanel.BackgroundImage")));
            this.MovingPanel.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.MovingPanel.GradientColor1 = System.Drawing.Color.DimGray;
            this.MovingPanel.GradientColor2 = System.Drawing.Color.Gainsboro;
            this.MovingPanel.GradientColor3 = System.Drawing.Color.Gainsboro;
            this.MovingPanel.GradientColor4 = System.Drawing.Color.Black;
            this.MovingPanel.Location = new System.Drawing.Point(41, 98);
            this.MovingPanel.Name = "MovingPanel";
            this.MovingPanel.Size = new System.Drawing.Size(220, 5);
            this.MovingPanel.TabIndex = 0;
            this.MovingPanel.Text = "gunaGradientPanel1";
            this.MovingPanel.Click += new System.EventHandler(this.MovingPanel_Click);
            // 
            // btnAddRoom
            // 
            this.btnAddRoom.AnimationHoverSpeed = 0.07F;
            this.btnAddRoom.AnimationSpeed = 0.03F;
            this.btnAddRoom.BackColor = System.Drawing.Color.Transparent;
            this.btnAddRoom.BaseColor = System.Drawing.Color.White;
            this.btnAddRoom.BorderColor = System.Drawing.Color.Black;
            this.btnAddRoom.DialogResult = System.Windows.Forms.DialogResult.None;
            this.btnAddRoom.FocusedColor = System.Drawing.Color.Empty;
            this.btnAddRoom.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnAddRoom.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btnAddRoom.Image = ((System.Drawing.Image)(resources.GetObject("btnAddRoom.Image")));
            this.btnAddRoom.ImageAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.btnAddRoom.ImageSize = new System.Drawing.Size(40, 40);
            this.btnAddRoom.Location = new System.Drawing.Point(18, 13);
            this.btnAddRoom.Name = "btnAddRoom";
            this.btnAddRoom.OnHoverBaseColor = System.Drawing.Color.White;
            this.btnAddRoom.OnHoverBorderColor = System.Drawing.Color.Black;
            this.btnAddRoom.OnHoverForeColor = System.Drawing.Color.Black;
            this.btnAddRoom.OnHoverImage = null;
            this.btnAddRoom.OnPressedColor = System.Drawing.Color.DimGray;
            this.btnAddRoom.Radius = 26;
            this.btnAddRoom.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.btnAddRoom.Size = new System.Drawing.Size(264, 90);
            this.btnAddRoom.TabIndex = 5;
            this.btnAddRoom.Text = "Add Room";
            this.btnAddRoom.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.btnAddRoom.Click += new System.EventHandler(this.btnAddRoom_Click);
            // 
            // btnEmployee
            // 
            this.btnEmployee.AnimationHoverSpeed = 0.07F;
            this.btnEmployee.AnimationSpeed = 0.03F;
            this.btnEmployee.BackColor = System.Drawing.Color.Transparent;
            this.btnEmployee.BaseColor = System.Drawing.Color.White;
            this.btnEmployee.BorderColor = System.Drawing.Color.Black;
            this.btnEmployee.DialogResult = System.Windows.Forms.DialogResult.None;
            this.btnEmployee.FocusedColor = System.Drawing.Color.Empty;
            this.btnEmployee.Font = new System.Drawing.Font("Segoe UI", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnEmployee.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btnEmployee.Image = ((System.Drawing.Image)(resources.GetObject("btnEmployee.Image")));
            this.btnEmployee.ImageSize = new System.Drawing.Size(40, 40);
            this.btnEmployee.Location = new System.Drawing.Point(1134, 13);
            this.btnEmployee.Name = "btnEmployee";
            this.btnEmployee.OnHoverBaseColor = System.Drawing.Color.White;
            this.btnEmployee.OnHoverBorderColor = System.Drawing.Color.Black;
            this.btnEmployee.OnHoverForeColor = System.Drawing.Color.Black;
            this.btnEmployee.OnHoverImage = null;
            this.btnEmployee.OnPressedColor = System.Drawing.Color.Black;
            this.btnEmployee.Radius = 26;
            this.btnEmployee.Size = new System.Drawing.Size(270, 90);
            this.btnEmployee.TabIndex = 4;
            this.btnEmployee.Text = "Employee";
            this.btnEmployee.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.btnEmployee.Click += new System.EventHandler(this.gunaButton5_Click);
            // 
            // btnCustomerDetails
            // 
            this.btnCustomerDetails.AnimationHoverSpeed = 0.07F;
            this.btnCustomerDetails.AnimationSpeed = 0.03F;
            this.btnCustomerDetails.BackColor = System.Drawing.Color.Transparent;
            this.btnCustomerDetails.BaseColor = System.Drawing.Color.White;
            this.btnCustomerDetails.BorderColor = System.Drawing.Color.Black;
            this.btnCustomerDetails.DialogResult = System.Windows.Forms.DialogResult.None;
            this.btnCustomerDetails.FocusedColor = System.Drawing.Color.Empty;
            this.btnCustomerDetails.Font = new System.Drawing.Font("Segoe UI", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnCustomerDetails.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btnCustomerDetails.Image = ((System.Drawing.Image)(resources.GetObject("btnCustomerDetails.Image")));
            this.btnCustomerDetails.ImageSize = new System.Drawing.Size(40, 40);
            this.btnCustomerDetails.Location = new System.Drawing.Point(858, 13);
            this.btnCustomerDetails.Name = "btnCustomerDetails";
            this.btnCustomerDetails.OnHoverBaseColor = System.Drawing.Color.White;
            this.btnCustomerDetails.OnHoverBorderColor = System.Drawing.Color.Black;
            this.btnCustomerDetails.OnHoverForeColor = System.Drawing.Color.Black;
            this.btnCustomerDetails.OnHoverImage = null;
            this.btnCustomerDetails.OnPressedColor = System.Drawing.Color.Black;
            this.btnCustomerDetails.Radius = 26;
            this.btnCustomerDetails.Size = new System.Drawing.Size(270, 90);
            this.btnCustomerDetails.TabIndex = 3;
            this.btnCustomerDetails.Text = "     Customer Details";
            this.btnCustomerDetails.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.btnCustomerDetails.Click += new System.EventHandler(this.gunaButton4_Click);
            // 
            // btnCheckOut
            // 
            this.btnCheckOut.AnimationHoverSpeed = 0.07F;
            this.btnCheckOut.AnimationSpeed = 0.03F;
            this.btnCheckOut.BackColor = System.Drawing.Color.Transparent;
            this.btnCheckOut.BaseColor = System.Drawing.Color.White;
            this.btnCheckOut.BorderColor = System.Drawing.Color.Black;
            this.btnCheckOut.DialogResult = System.Windows.Forms.DialogResult.None;
            this.btnCheckOut.FocusedColor = System.Drawing.Color.Empty;
            this.btnCheckOut.Font = new System.Drawing.Font("Segoe UI", 13.8F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnCheckOut.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btnCheckOut.Image = ((System.Drawing.Image)(resources.GetObject("btnCheckOut.Image")));
            this.btnCheckOut.ImageSize = new System.Drawing.Size(40, 40);
            this.btnCheckOut.Location = new System.Drawing.Point(574, 13);
            this.btnCheckOut.Name = "btnCheckOut";
            this.btnCheckOut.OnHoverBaseColor = System.Drawing.Color.White;
            this.btnCheckOut.OnHoverBorderColor = System.Drawing.Color.Black;
            this.btnCheckOut.OnHoverForeColor = System.Drawing.Color.Black;
            this.btnCheckOut.OnHoverImage = null;
            this.btnCheckOut.OnPressedColor = System.Drawing.Color.Black;
            this.btnCheckOut.Radius = 26;
            this.btnCheckOut.Size = new System.Drawing.Size(278, 90);
            this.btnCheckOut.TabIndex = 2;
            this.btnCheckOut.Text = "Check Out";
            this.btnCheckOut.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.btnCheckOut.Click += new System.EventHandler(this.gunaButton3_Click);
            // 
            // btnCustomerRegistration
            // 
            this.btnCustomerRegistration.AnimationHoverSpeed = 0.07F;
            this.btnCustomerRegistration.AnimationSpeed = 0.03F;
            this.btnCustomerRegistration.BackColor = System.Drawing.Color.Transparent;
            this.btnCustomerRegistration.BaseColor = System.Drawing.Color.White;
            this.btnCustomerRegistration.BorderColor = System.Drawing.Color.Black;
            this.btnCustomerRegistration.DialogResult = System.Windows.Forms.DialogResult.None;
            this.btnCustomerRegistration.FocusedColor = System.Drawing.Color.Empty;
            this.btnCustomerRegistration.Font = new System.Drawing.Font("Segoe UI", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.btnCustomerRegistration.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.btnCustomerRegistration.Image = ((System.Drawing.Image)(resources.GetObject("btnCustomerRegistration.Image")));
            this.btnCustomerRegistration.ImageAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.btnCustomerRegistration.ImageSize = new System.Drawing.Size(30, 30);
            this.btnCustomerRegistration.Location = new System.Drawing.Point(288, 13);
            this.btnCustomerRegistration.Name = "btnCustomerRegistration";
            this.btnCustomerRegistration.OnHoverBaseColor = System.Drawing.Color.White;
            this.btnCustomerRegistration.OnHoverBorderColor = System.Drawing.Color.Black;
            this.btnCustomerRegistration.OnHoverForeColor = System.Drawing.Color.Black;
            this.btnCustomerRegistration.OnHoverImage = null;
            this.btnCustomerRegistration.OnPressedColor = System.Drawing.Color.Black;
            this.btnCustomerRegistration.Radius = 26;
            this.btnCustomerRegistration.RightToLeft = System.Windows.Forms.RightToLeft.No;
            this.btnCustomerRegistration.Size = new System.Drawing.Size(280, 90);
            this.btnCustomerRegistration.TabIndex = 1;
            this.btnCustomerRegistration.Text = "Customer Registration";
            this.btnCustomerRegistration.TextAlign = System.Windows.Forms.HorizontalAlignment.Center;
            this.btnCustomerRegistration.Click += new System.EventHandler(this.btnCustomerRegistration_Click);
            // 
            // panel2
            // 
            this.panel2.Anchor = ((System.Windows.Forms.AnchorStyles)((((System.Windows.Forms.AnchorStyles.Top | System.Windows.Forms.AnchorStyles.Bottom) 
            | System.Windows.Forms.AnchorStyles.Left) 
            | System.Windows.Forms.AnchorStyles.Right)));
            this.panel2.BackColor = System.Drawing.Color.Transparent;
            this.panel2.BackgroundImageLayout = System.Windows.Forms.ImageLayout.None;
            this.panel2.Controls.Add(this.uC_Employee1);
            this.panel2.Controls.Add(this.customerDetails1);
            this.panel2.Controls.Add(this.uC_CustomerCheckOut1);
            this.panel2.Controls.Add(this.uC_CustomerRegistration2);
            this.panel2.Controls.Add(this.uC_CustomerRegistration1);
            this.panel2.Controls.Add(this.uC_AddRoom1);
            this.panel2.Location = new System.Drawing.Point(12, 159);
            this.panel2.Name = "panel2";
            this.panel2.Size = new System.Drawing.Size(1800, 800);
            this.panel2.TabIndex = 1;
            // 
            // gunaElipse1
            // 
            this.gunaElipse1.Radius = 30;
            this.gunaElipse1.TargetControl = this.panel2;
            // 
            // gunaElipse2
            // 
            this.gunaElipse2.Radius = 30;
            this.gunaElipse2.TargetControl = this;
            // 
            // gunaElipse4
            // 
            this.gunaElipse4.Radius = 30;
            this.gunaElipse4.TargetControl = this;
            // 
            // gunaElipse3
            // 
            this.gunaElipse3.Radius = 30;
            this.gunaElipse3.TargetControl = this;
            // 
            // gunaElipse5
            // 
            this.gunaElipse5.Radius = 30;
            this.gunaElipse5.TargetControl = this;
            // 
            // customerDetails1
            // 
            this.customerDetails1.BackColor = System.Drawing.Color.White;
            this.customerDetails1.Location = new System.Drawing.Point(20, 16);
            this.customerDetails1.Name = "customerDetails1";
            this.customerDetails1.Size = new System.Drawing.Size(1700, 781);
            this.customerDetails1.TabIndex = 4;
            // 
            // uC_CustomerCheckOut1
            // 
            this.uC_CustomerCheckOut1.BackColor = System.Drawing.Color.White;
            this.uC_CustomerCheckOut1.Location = new System.Drawing.Point(20, 16);
            this.uC_CustomerCheckOut1.Name = "uC_CustomerCheckOut1";
            this.uC_CustomerCheckOut1.Size = new System.Drawing.Size(1700, 781);
            this.uC_CustomerCheckOut1.TabIndex = 3;
            // 
            // uC_CustomerRegistration2
            // 
            this.uC_CustomerRegistration2.BackColor = System.Drawing.Color.White;
            this.uC_CustomerRegistration2.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.uC_CustomerRegistration2.Location = new System.Drawing.Point(20, 26);
            this.uC_CustomerRegistration2.Name = "uC_CustomerRegistration2";
            this.uC_CustomerRegistration2.Size = new System.Drawing.Size(1700, 781);
            this.uC_CustomerRegistration2.TabIndex = 2;
            // 
            // uC_CustomerRegistration1
            // 
            this.uC_CustomerRegistration1.BackColor = System.Drawing.Color.White;
            this.uC_CustomerRegistration1.ForeColor = System.Drawing.SystemColors.ActiveCaptionText;
            this.uC_CustomerRegistration1.Location = new System.Drawing.Point(20, 16);
            this.uC_CustomerRegistration1.Name = "uC_CustomerRegistration1";
            this.uC_CustomerRegistration1.Size = new System.Drawing.Size(1700, 781);
            this.uC_CustomerRegistration1.TabIndex = 1;
            // 
            // uC_AddRoom1
            // 
            this.uC_AddRoom1.BackColor = System.Drawing.Color.White;
            this.uC_AddRoom1.ForeColor = System.Drawing.Color.FromArgb(((int)(((byte)(64)))), ((int)(((byte)(64)))), ((int)(((byte)(64)))));
            this.uC_AddRoom1.Location = new System.Drawing.Point(20, 26);
            this.uC_AddRoom1.Name = "uC_AddRoom1";
            this.uC_AddRoom1.Size = new System.Drawing.Size(1700, 781);
            this.uC_AddRoom1.TabIndex = 0;
            this.uC_AddRoom1.Visible = false;
            // 
            // uC_Employee1
            // 
            this.uC_Employee1.BackColor = System.Drawing.Color.White;
            this.uC_Employee1.Location = new System.Drawing.Point(20, 26);
            this.uC_Employee1.Name = "uC_Employee1";
            this.uC_Employee1.Size = new System.Drawing.Size(1700, 700);
            this.uC_Employee1.TabIndex = 5;
            // 
            // Dashboard
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(120F, 120F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Dpi;
            this.BackColor = System.Drawing.Color.White;
            this.BackgroundImage = ((System.Drawing.Image)(resources.GetObject("$this.BackgroundImage")));
            this.BackgroundImageLayout = System.Windows.Forms.ImageLayout.Stretch;
            this.ClientSize = new System.Drawing.Size(1902, 1033);
            this.Controls.Add(this.panel2);
            this.Controls.Add(this.panel1);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.None;
            this.Name = "Dashboard";
            this.StartPosition = System.Windows.Forms.FormStartPosition.CenterScreen;
            this.Text = "Dashboard";
            this.WindowState = System.Windows.Forms.FormWindowState.Maximized;
            this.Load += new System.EventHandler(this.Dashboard_Load);
            this.panel1.ResumeLayout(false);
            this.panel2.ResumeLayout(false);
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.Panel panel1;
        private System.Windows.Forms.Panel panel2;
        private Guna.UI.WinForms.GunaButton btnEmployee;
        private Guna.UI.WinForms.GunaButton btnCustomerDetails;
        private Guna.UI.WinForms.GunaButton btnCheckOut;
        private Guna.UI.WinForms.GunaButton btnCustomerRegistration;
        private Guna.UI.WinForms.GunaGradientPanel MovingPanel;
        private Guna.UI.WinForms.GunaButton btnAddRoom;
        private Guna.UI.WinForms.GunaElipse gunaElipse1;
        private AllUserControls.UC_AddRoom uC_AddRoom1;
        private Guna.UI.WinForms.GunaElipse gunaElipse2;
        private AllUserControls.UC_CustomerRegistration uC_CustomerRegistration1;
        private AllUserControls.UC_CustomerRegistration uC_CustomerRegistration2;
        private Guna.UI.WinForms.GunaElipse gunaElipse4;
        private Guna.UI.WinForms.GunaElipse gunaElipse3;
        private AllUserControls.CustomerDetails customerDetails1;
        private AllUserControls.UC_CustomerCheckOut uC_CustomerCheckOut1;
        private Guna.UI.WinForms.GunaElipse gunaElipse5;
        private AllUserControls.UC_Employee uC_Employee1;
    }
}