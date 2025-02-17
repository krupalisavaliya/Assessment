function validateForm() {
    
    const fullName = document.getElementById("fullName");
    const email = document.getElementById("email");
    const mobile = document.getElementById("mobile");
    const address = document.getElementById("address");
    const gender = document.getElementById("gender");
    const dob = document.getElementById("dob");
    const password = document.getElementById("password");
    const confirmPassword = document.getElementById("confirmPassword");


    if (fullName.value.trim() === "") {
        alert("Name cannot be empty.");
        fullName.focus();
        return false;
    }
    const nameRegex = /^[a-zA-Z]{3,6}$/;
    if (!nameRegex.test(fullName.value)) {
        alert("Name must be 3-6 alphabetic characters.");
        fullName.focus();
        return false;
    }

    if (email.value.trim() === "") {
        alert("Email cannot be empty.");
        email.focus();
        return false;
    }
    const emailRegex = /^[a-zA-Z0-9._-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,}$/;
    if (!emailRegex.test(email.value)) {
        alert("Please enter a valid email address.");
        email.focus();
        return false;
    }

    if (mobile.value.trim() === "") {
        alert("Mobile number cannot be empty.");
        mobile.focus();
        return false;
    }
    const mobileRegex = /^[0-9]{10}$/;
    if (!mobileRegex.test(mobile.value)) {
        alert("Mobile number must be exactly 10 digits.");
        mobile.focus();
        return false;
    }

    if (address.value.trim() === "") {
        alert("Address cannot be empty.");
        address.focus();
        return false;
    }

    
    if (gender.value === "") {
        alert("Please select your gender.");
        gender.focus();
        return false;
    }

    
    if (dob.value === "") {
        alert("Please select your date of birth.");
        dob.focus();
        return false;
    }

    if (password.value.trim() === "") {
        alert("Password cannot be empty.");
        password.focus();
        return false;
    }
    if (password.value.length < 6) {
        alert("Password must be at least 6 characters.");
        password.focus();
        return false;
    }

    if (confirmPassword.value.trim() === "") {
        alert("Please confirm your password.");
        confirmPassword.focus();
        return false;
    }
    if (password.value !== confirmPassword.value) {
        alert("Passwords do not match.");
        confirmPassword.focus();
        return false;
    }

    
    alert("Registration successful!");
    return true;
}
