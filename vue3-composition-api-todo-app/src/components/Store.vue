<template>
    <div class="home">
        <h1>Thời trang</h1>
        <img src="../assets/store.jpg" alt="" style="width:300px;height:300px">
        <div 
        :style="{ color :$store.state.colorCode }"
        class="counter">
            {{$store.state.counter}}
        </div>
        <div class="counter-squared" >
            {{$store.state.counter}}
            <sup>2</sup> = {{$store.getters.counterSquared}}
        </div>
        <div class="buttons">
            <button @click="$store.dispatch('decreaseCounter')">-</button>
            <button @click="$store.dispatch('increaseCounter')">+</button>
        </div>
        <div>
            <input 
            v-model="$store.state.colorCode"
            placeholder="Enter color code" 
            type="text">
        </div>
    </div>
</template>
<script>
export default {
    computed:{
        colorCode:{
            get()
            {
                return this.$store.state.colorCode
            },
            set(newValue)
            {
                this.$store.dispatch('setColorCode',newValue)
            }
        }
    }
}
</script>
<style>
.counter
{
    margin: 0px 80px;
    font-size: 80px;
}
.buttons button
{
    font-size: 30px;
    width: 80px;
    margin: 0px 10px;
}
</style>