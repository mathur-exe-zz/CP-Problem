int sortStack (stack <int< st) {
    if(st.size() == 1) return st; // Base Condition

    // Hypothesis
    int temp = st.pop(); 
    sortStack(st); 

    return insertElementAtStack(st, temp);
}

int insertElementAtStack(stack <int> st, int temp) {
    // Base Condition
    if(st.size() == 0 || temp >= st.peek()){ 
      st.push(temp); 
      return st;
    }

    // Hypothesis
    int val = st.pop(); 
    insertElementAtStack(st, temp); 
    // Induction
    st.push(val); 
    return st;
  }