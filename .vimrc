" Kolorowanie kolumny 80
set colorcolumn=80
highlight ColorColumn ctermbg=darkgray

" Indentation purely with hard tabs
set noexpandtab
set shiftwidth=4
set tabstop=4
"set softtabstop=4

" Save and make current file
function! Make()
  let curr_dir = expand('%:h')
  if curr_dir == ''
    let curr_dir = '.'
  endif
  echo curr_dir
  execute 'lcd ' . curr_dir
  execute 'make %:r'
  execute 'lcd -'
endfunction
nnoremap <F8> :update<CR>:call Make()<CR>

" Run current file
nnoremap <F9> :!./%:r<CR>

