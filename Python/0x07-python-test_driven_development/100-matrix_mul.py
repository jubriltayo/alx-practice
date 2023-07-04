#!/usr/bin/python3

def matrix_mul(m_a, m_b):
    if not isinstance(m_a, list):
        raise TypeError('m_a must be a list')
    for row in m_a:
        if not isinstance(row, list):
            raise TypeError('m_a must be a list of lists')
        if len(m_a[0]) != len(row):
            raise TypeError('each row of m_a must be of the same size')
        for elem in row:
            if not isinstance(elem, (int, float)):
                raise TypeError('m_a should contain only integers or floats')        
    if m_a == [] or m_a == [[]]:
        raise ValueError('m_a can\'t be empty')
    
    if not isinstance(m_b, list):
        raise TypeError('m_b must be a list')
    for row in m_b:
        if not isinstance(row, list):
            raise TypeError('m_b must be a list of lists')
        if len(m_b[0]) != len(row):
            raise TypeError('each row of m_b must be of the same size')
        for elem in row:
            if not isinstance(elem, (int, float)):
                raise TypeError('m_b should contain only integers or floats')        
    if m_b == [] or m_b == [[]]:
        raise ValueError('m_b can\'t be empty')
    
    if len(m_a[0]) != len(m_b):
        raise ValueError('m_a and m_b can\'t be multiplied')

    # Initialize every cell of new result to 0
    result = [[0 for x in range(len(m_b[0]))] for y in range(len(m_a))]

    for i in range(len(m_a)):
        for j in range(len(m_b[0])):
            for k in range(len(m_b)):
                result[i][j] += m_a[i][k] * m_b[k][j]
    
    return result