package io.github.jitinsharma.androidapp

import android.os.Bundle
import android.support.v7.app.AppCompatActivity
import io.github.jitinsharma.API_KEY
import io.github.jitinsharma.Helper
import io.github.jitinsharma.Model
import kotlinx.android.synthetic.main.activity_main.*

class MainActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_main)
        val helper = Helper()
        val sum = helper.getSum(2,3)
        sumView.text = "Sum: " + sum

        val modifiedList = helper.sliceFilterAndSort(
                listOf("Adam","Aakash","John","Enrique","Abhishek"))
        println(modifiedList)

        val helperId = Helper.helperId
        val helperType = Helper.getHelperType()
        println("$helperId $helperType")

        val model = Model()
        println(model)
        val model2 = model.copy(id = 3)
        println(model2)

        val key = API_KEY
        println(key)
    }
}