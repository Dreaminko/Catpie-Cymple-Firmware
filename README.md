基于 [Project Cymple](https://github.com/Dominocs/Project_Cymple) 原版固件针对 CatPie 面捕进行了一些修改。

## 修改内容：
 - 适配无 PSRAM 硬件
 - 适配电源状态灯
 - 降低摄像头分辨率

## 使用方式：
Clone 该项目后用 VSCode 打开，使用 PlatformIO 烧录。

可以使用旧版 Cymple 应用进行手动配网。
未配置或连接失败多次后，设备会开启配网页面。

默认热点：

```text
Cymple_Face
```

默认 AP 地址：

```text
192.168.4.1
```

连接该热点后，在浏览器打开 `http://192.168.4.1`，填写 WiFi 名称、密码和设备位置。
