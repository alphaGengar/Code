" Specify the plugin manager (Vim-Plug)
call plug#begin('~/.vim/plugged')

  
" List your plugins here
" Example: Plug 'username/plugin-name'
Plug 'vim-airline/vim-airline'
Plug 'vim-airline/vim-airline-themes'
"Plug 'vimsence/vimsence'
Plug 'jiangmiao/auto-pairs'
"Plug 'Stoozy/vimcord'

  
" End the plugin manager section
call plug#end()


" VIM AIRLINE REDDIT SETUP
let g:airline_theme='base16_gruvbox_dark_hard'
let g:airline_powerline_fonts = 1
let g:airline_section_b = '%{getcwd()}' " in section B of the status line display the CWD


"TABLINE:
let g:airline#extensions#tabline#enabled = 1           " enable airline tabline
let g:airline#extensions#tabline#show_close_button = 0 " remove 'X' at the end of the tabline
let g:airline#extensions#tabline#tabs_label = ''       " can put text here like BUFFERS to denote buffers (I clear it so nothing is shown)
let g:airline#extensions#tabline#buffers_label = ''    " can put text here like TABS to denote tabs (I clear it so nothing is shown)
let g:airline#extensions#tabline#fnamemod = ':t'       " disable file paths in the tab
let g:airline#extensions#tabline#show_tab_count = 0    " dont show tab numbers on the right
let g:airline#extensions#tabline#show_buffers = 0      " dont show buffers in the tabline
let g:airline#extensions#tabline#tab_min_count = 2     " minimum of 2 tabs needed to display the tabline
let g:airline#extensions#tabline#show_splits = 0       " disables the buffer name that displays on the right of the tabline
let g:airline#extensions#tabline#show_tab_nr = 0       " disable tab numbers
let g:airline#extensions#tabline#show_tab_type = 0     " disables the weird ornage arrow on the tabline


" CHATGPT AUTO PAIRS
let g:AutoPairsFlyMode = 1       " Enable fast-wrap insert mode
let g:AutoPairsShortcutBackInsert = '<C-h>'  " Use Ctrl-h to delete pairs


" Define pairs for specific filetypes
autocmd FileType c,cpp,java let b:AutoPairs = AutoPairsDefine({'(':')', '{':'}', '[':']', '"':'"', "'":"'"})


" Highlight the current pair
highlight AutoPairsFlyAtCursor ctermfg=black ctermbg=lightgrey guifg=black guibg=lightgrey


" SOME STUFF FROM CODE FORCES
syntax on
set noerrorbells
set tabstop=4 softtabstop=4
set smartindent
set smarttab
set autoindent
set cindent
set shiftwidth=4
set expandtab
set nu
set relativenumber
set ruler
set guifont=*
set backspace=indent,eol,start
set clipboard=unnamed
nnoremap <C-Right> :tabnext<CR>
nnoremap <C-Left> :tabprevious<CR>
autocmd filetype cpp nnoremap <F5> :w <bar> !g++ -std=c++17 -O2 -Wall % -o %:r && ./%:r <CR>
