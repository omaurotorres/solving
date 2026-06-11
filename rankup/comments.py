def strip_comments(string, markers):
    result = string.split('\n')

    for mark in markers:
        for n, line in enumerate(result):
            if line.find(mark) > 0:
                result[n] = line[0:line.find(mark)].strip()
    
    return '\n'.join(result)
