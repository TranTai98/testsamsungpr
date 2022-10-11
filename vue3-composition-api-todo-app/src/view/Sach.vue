<template>
    <div>
        Thể loại 
        <button @click="showBook = !showBook">Ẩn/Hiện</button>
        <Book v-if="showBook"/>
    </div>
</template>
<script>
    import Book from './sach/Book.vue'
    export default {
    name:'sach:',
    components:{
        Book
    },
    data() {
        return {
            showBook:true
        }
    },
}
</script>