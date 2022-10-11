<template>
    <div>
        <div class="nhacxanh">
        Khánh Phương;
        Khắc Việt ;
        Tuấn Hưng
        </div>
        <div class="nhactre">
        MONO ;
        Sơn Tùng MT-P;
        Bích Phương
        </div>
    </div>
</template>
<script>
   export default {
    name:'Piano',
    beforeCreate()
    {
        console.log('Piano beforeCreate()')

    },
    created()
    {
        console.log('Piano create()')
    },
    beforeMount()
    {
        console.log('Piano beforeMount()')
    },
    mounted()
    {
        console.log('Piano mounted()')
    },
    beforeUpdate()
    {
        console.log('Piano beforeUpdate()')
    },
    updated() {
        console.log('Piano updated()')
    },
    beforeUnmount()
    {
        console.log('Piano beforeUnmount()')
    },
    unmounted() {
        console.log('Piano unmounted()')
    },
   }
</script>
<style>

</style>