<template>
	<div>
	<Todoapp/>
	<MainAction/>	
	<router-view/>
	<Computed/>
	<Store/>
	</div>
</template>
<script>
import MainAction from './components/MainAction.vue'
import Todoapp from './components/Todoapp.vue'
import Computed from './components/Computed.vue'
import Store from './components/Store.vue'
export default {
	components:
	{
		MainAction,Todoapp,Computed,Store
	}
}
</script>
