<template>
    <div>
        <Music/>
    </div>

</template>
<script>
  import Music from './amnhac/Music.vue'
  export default {
  name:'App',
  components:{
    Music
  },
  data()
  {
    return{
        title:'Am nhac bat tan',
    }
  },
  beforeCreate()
    {
        console.log('Music beforeCreate()')

    },
    created()
    //goi api,call Ajax
    {
        console.log('Music create()')
    },
    beforeMount()
    {
        console.log('Music beforeMount()')
    },
    mounted()
    {
        console.log('Music mounted()',this.title)
    },
    beforeUpdate()
    {
        console.log('Music beforeUpdate()',this.title)
    },
    updated() {
        console.log('Music updated()',this.title)
    },
    beforeUnmount()
    {
        console.log('Music beforeUnmount()',this.title)
    },
    unmounted() {
        console.log('Music unmounted()',this.title)
    },
  }
</script>