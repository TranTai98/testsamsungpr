<template>
    <div class="menu" >
        <router-link class="link" to="/">
            <p class="item-menu">
                Sách
            </p>
        </router-link>
        <router-link class="link" to="/amnhac" style="padding-left:10px">
            <p class="item-menu">
                Âm nhạc
            </p>
        </router-link>
    </div>
</template>
<style>
    .menu {
        display: flex;
        justify-content: center;
    }

    .item-menu {
        margin: 10px;
        font-size: large;
        cursor: pointer;
        font-weight: 600;
    }

    .link {
        color: inherit;
        text-decoration: none;
    }
</style>