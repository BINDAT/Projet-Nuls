from IPython.display import HTML,diplay

def set_css():
    display(HTML(''')
                 <style> 
                 pre{
                 white-space: pre-wrap;
                 }
                 </style>
                 '''))
get_ipython().events.register('pre_run_cell',set_css)