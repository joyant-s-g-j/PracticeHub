import { Route, Routes } from "react-router-dom"
import FloatingShape from "./components/FloatingShape"
import SignupPage from "./pages/SignupPage"
import LoginPage from "./pages/LoginPage"
import EmailVerificationPage from "./pages/EmailVerificationPage"

function App() {

  return (
    <div className="min-h-screen bg-gradient-to-br from-gray-900 via-green-900 to-emerald-900 flex items-center justify-center relative overflow-hidden">
      <FloatingShape color="bg-green-500" size="w-64 h-64" top="5%" left="15%" delay={0} />
      <FloatingShape color="bg-emerald-500" size="w-48 h-48" top="65%" left="75%" delay={5} />
      <FloatingShape color="bg-lime-500" size="w-32 h-32" top="35%" left="5%" delay={2} />

      <Routes>
        <Route path="/" element={"Home"}/>
        <Route path="/signup" element={<SignupPage/>}/>
        <Route path="/login" element={<LoginPage/>}/>
        <Route path="/verify-email" element={<EmailVerificationPage/>}/>
      </Routes>
    </div>
  )
}

export default App
