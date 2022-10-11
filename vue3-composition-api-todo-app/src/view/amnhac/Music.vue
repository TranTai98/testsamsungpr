<template>
    <div>
        Ca sĩ
        <button @click="showPiano = !showPiano">Ẩn/Hiện</button>
        <Piano v-if="showPiano"/>
    </div>
</template>
<script>
    import Piano from './Piano.vue'
   export default {
    components:{Piano},
    name:'Music',
    data()
    {
        return{
            showPiano:true,
        }
    },
    beforeCreate()
    {
        console.log('Music beforeCreate()')

    },
    created()
    {
        console.log('Music create()')
    },
    beforeMount()
    {
        console.log('Music beforeMount()')
    },
    mounted()
    {
        console.log('Music mounted()')
    },
    beforeUpdate()
    {
        console.log('Music beforeUpdate()')
    },
    updated() {
        console.log('Music updated()')
    },
    beforeUnmount()
    {
        console.log('Music beforeUnmount()')
    },
    unmounted() {
        console.log('Music unmounted()')
    },
   }
</script>
<style>

</style>