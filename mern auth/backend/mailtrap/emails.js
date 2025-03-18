import { VERIFICATION_EMAIL_TEMPLATE } from "./emailTemplates.js"
import { mailtrapClient, sender } from "./mailtrap.config.js"

export const sendVerificationEmail = async (email, verificationToken) => {
    const recipient = [{email}]

    try {
        const response = await mailtrapClient.send({
            from:sender,
            to:recipient,
            subject:"Verify your email",
            html: VERIFICATION_EMAIL_TEMPLATE.replace("{verificationCode}", verificationToken),
            category: "Email Verification"
        })
        console.log("Email sent successfully", response)
    } catch (error) {
        console.error(`Error sending verification`, error);
        throw new Error(`Error sending verification email: ${error}`);
    }
}

export const sendWelcomeEmail = async (email, name) => {
    const recipient = [{ email }]
    try {
        const response = await mailtrapClient.send({
            from:sender,
            to: recipient,
            template_uuid: "edc99590-d6c7-4fe3-8128-441104b0f554",
            template_variables: {
                company_info_name: "MERN Auth",
                name: name
            }
        });
        console.log("Welcome email sent successfully");
    } catch (error) {
        console.error(`Error sending welcome email`, error);
        throw new Error(`Error sending welcome email: ${error}`);
    }
}