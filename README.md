### 編譯debug symbol
```vim
autocmd filetype c nnoremap <F5> :w <bar> !gcc % -o %:r -Wall -g <CR>
```

### HW3
#### 3-1
快速冪
#### 3-2
DP, 加總DP
#### 3-3
透過hint給的資訊可以發現對B做二分搜的話可以對R暴搜

由於3x8=24>18所以對範圍1000以內的R搜尋，時間還會剩很多
