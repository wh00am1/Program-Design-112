### configure vpn on linux
```console
sudo apt install openvpn
openvpn <ccucsie.ovpn>
```

### compile with debug symbol
```
autocmd filetype c nnoremap <F5> :w <bar> !gcc % -o %:r -Wall -g <CR>
```


