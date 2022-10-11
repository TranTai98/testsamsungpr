import {createRouter,createWebHistory} from 'vue-router'
import Amnhac from '@/view/Amnhac.vue'
import Sach from '@/view/Sach.vue'
import Error from '@/view/Error.vue'
const routes =[
    {
        path:'/amnhac',
        component:Amnhac
    },
    {
        path:'/',
        component:Sach
    },
    {
        path:'/:pathMatch(.*)*',
        component:Error
    }
]
const router = createRouter(
    {
        history:createWebHistory(),
        routes:routes
    }
)
export default router