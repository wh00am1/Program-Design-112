### configure vpn on linux
```bash
sudo apt install openvpn
openvpn ccucsie.ovpn
```

### compile with debug symbol
```vim
autocmd filetype c nnoremap <F5> :w <bar> !gcc % -o %:r -Wall -g <CR>
```


