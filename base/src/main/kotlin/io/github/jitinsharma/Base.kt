package io.github.jitinsharma

/**
 * Created by jsharma on 16/03/18.
 */

const val API_KEY = "abdfkdfgl453"

class Helper {

    fun getSum(first: Int, second: Int): Int = first + second

    fun sliceFilterAndSort(list: List<String>): List<String> =
            list.subList(0, 4).filter { it.length > 3 }.sortedBy { it.length }

    companion object {
        val helperId: Int = 0
        fun getHelperType() : String = "Helper234"
    }
}

data class Model(
        var id: Int = 0,
        var type: String = ""
)