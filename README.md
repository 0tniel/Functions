# Functions
<br> <p align="center"> <strong>Experiment No 9 </strong> </p>
<h1>Pointer Operations</h1>
    <h2>Experiment 10</h2>

  <h3>Aim</h3>
    <p>To study and implement Pointer Operations, including Call by Reference and Call by Value in C++.</p>

  <h3>Theory</h3>
    <p>In C++, functions can receive parameters in different ways, influencing how the function manipulates the provided values. Two common methods are:</p>

  <h4>Call by Reference</h4>
    <p><strong>Definition:</strong> Call by Reference means passing the address (reference) of the actual parameters to the function. This allows the function to modify the original values directly.</p>

  <h4>Call by Value</h4>
    <p><strong>Definition:</strong> Call by Value means passing a copy of the actual parameters to the function. Changes made to the parameters inside the function do not affect the original variables.</p>

  h3>Algorithms</h3>
    <h4>Call by Reference</h4>
    <ol>
        <li><strong>Start</strong></li>
        <li>Define function <code>swap(int *x, int *y)</code></li>
        <li><strong>Input:</strong> Pointers to two integers <code>x</code> and <code>y</code></li>
        <li><strong>Output:</strong> Swapped values of the integers pointed to by <code>x</code> and <code>y</code></li>
        <li><strong>Steps inside the swap function:</strong>
            <ul>
                <li>Make a temporary variable <code>temp</code></li>
                <li>Assign the value pointed to by <code>x</code> to <code>temp</code> (<code>temp = *x</code>)</li>
                <li>Assign the value pointed to by <code>y</code> to the location pointed to by <code>x</code> (<code>*x = *y</code>)</li>
                <li>Assign the value of <code>temp</code> to the location pointed to by <code>y</code> (<code>*y = temp</code>)</li>
            </ul>
        </li>
        <li><strong>Inside the main function:</strong>
            <ul>
                <li>Define two integers <code>a = 5</code> and <code>b = 2</code></li>
                <li>Call <code>swap(&a, &b)</code> function</li>
                <li>Print the values of <code>a</code> and <code>b</code></li>
            </ul>
        </li>
        <li><strong>End</strong></li>
    </ol>
    <h4>Call by Value</h4>
    <ol>
        <li><strong>Start</strong></li>
        <li>Define function <code>swap(int x, int y)</code></li>
        <li><strong>Input:</strong> Two integers <code>x</code> and <code>y</code></li>
        <li><strong>Output:</strong> Swapped values of <code>x</code> and <code>y</code></li>
        <li><strong>Steps inside the swap function:</strong>
            <ul>
                <li>Create a temporary variable <code>temp</code></li>
                <li>Assign the value of <code>x</code> to <code>temp</code></li>
                <li>Assign the value of <code>y</code> to <code>x</code></li>
                <li>Assign the value of <code>temp</code> to <code>y</code></li>
            </ul>
        </li>
        <li><strong>Inside the main function:</strong>
            <ul>
                <li>Define two integers <code>a = 5</code> and <code>b = 2</code></li>
                <li>Call <code>swap(a, b)</code> function</li>
                <li>Print the values of <code>a</code> and <code>b</code></li>
            </ul>
        </li>
        <li><strong>End</strong></li>
    </ol>
    <h3>Conclusion</h3>
    <p>Through this experiment, the differences between Call by Reference and Call by Value were demonstrated. In Call by Reference, the function directly manipulates the original data, whereas in Call by Value, only a copy of the data is modified, leaving the original data unchanged.</p>
