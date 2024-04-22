package com.ahtisham.nativecodepractices

import androidx.appcompat.app.AppCompatActivity
import android.os.Bundle
import android.util.Log
import com.ahtisham.mynativelibrary.NativeLib

class MainActivity : AppCompatActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)

        val addtion=NativeLib().Add(20,20)
        val substract=NativeLib().Substract(20,20)
        val multiple=NativeLib().Multiple(20,20)

        Log.e("Result","Add =$addtion")
        Log.e("Result","Substract =$substract")
        Log.e("Result","Multiple =$multiple")
    }
}