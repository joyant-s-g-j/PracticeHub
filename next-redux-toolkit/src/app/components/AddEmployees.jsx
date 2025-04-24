'use client'
import React from 'react'
import { useState } from 'react'
import styles from '../addEmp.module.css'
import { useDispatch } from 'react-redux'
import { addEmployee } from '../reduxToolkit/slice'
import Link from 'next/link'
const AddEmployees = () => {
  const [empName, setEmpName] = useState('')
  const dispatch = useDispatch()
  const dataDispatch = () => {
    console.log(empName)
    dispatch(addEmployee(empName))
    setEmpName('')
  }
  return (
    <div className={styles.container}>
        <h1 className={styles.title}>Add Employees</h1>
        <input className={styles.input} value={empName} onChange={(e) => setEmpName(e.target.value)} type="text" placeholder='Enter employee data' />
        <button onClick={dataDispatch} className={styles.button}>Add</button>
        <Link href='/delete-employee'>Delete</Link>
    </div>
  )
}

export default AddEmployees