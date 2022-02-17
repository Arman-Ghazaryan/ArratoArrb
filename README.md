# ArratoArrb
Given an integer n and an array a of length n. The task is to apply the following mutation to a.
  -Array a mutates into new array b of length n.
  -For each i from 0 to n - 1, b[i] = a[i - 1] + a[i] + a[i + 1].
  -If some element in the sum a[i - 1] + a[i] + a[i + 1] does not exist,
  it should be set to 0. For example, b[0] should be equal to 0 + a[i] + a[i + 1].
