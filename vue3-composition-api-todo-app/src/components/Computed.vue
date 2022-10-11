<template>
    <div>
        <h2 class="tech">Công nghệ</h2>
        <h1>{{tech}}</h1>
        <h2>Tổng tiền:{{total}}</h2>
    </div>
</template>
<style>
.tech{
    font-size: large;
    text-align: center;
}
</style>
<script>
export default {
    data()
    {
        return{
            computer:'Máy tính',
            phone:'Điện thoại',
            car:'porsche',
            house:'vinhome',
            items:[
                {
                id:1,
                title:'Maytinh',
                price:100,
                },
                {
                    id:2,
                    title:'Dienthoai',
                    price:200,
                },
                {
                    id:3,
                    title:'nhathongminh',
                    price:300,
                },
                {
                    id:4,
                    title:'porsche',
                    price:400,
                }

            ],
        }
    },
    methods:{

    },
    computed:{
        tech()
        {
            return`${this.computer} 
            ${this.phone} 
            ${this.car} 
            ${this.house}`
        },
        total()
        {
            return this.items.reduce((total,curr) =>(total = total+ curr.price),0)
        }
    }
}
</script>