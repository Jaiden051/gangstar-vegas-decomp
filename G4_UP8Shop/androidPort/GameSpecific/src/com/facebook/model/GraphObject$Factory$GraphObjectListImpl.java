// Decompiled from classes.dex (SourceFile: GraphObject$Factory$GraphObjectListImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

import com.facebook.internal.Validate;
final class GraphObject$Factory$GraphObjectListImpl<T> extends java.util.AbstractList<T> implements com.facebook.model.GraphObjectList<T> {
    // Fields
    private final java.lang.Class itemType;
    private final org.json.JSONArray state;

    // Methods
    public GraphObject$Factory$GraphObjectListImpl(org.json.JSONArray p0, Class<?> p1)
    {
      super();
      Validate.notNull(p0, "state");
      Validate.notNull(p1, "itemType");
      this.state = p0;
      this.itemType = p1;
    }

    private void checkIndex(int p0)
    {
      if ( p0 < 0 || p0 >= this.state.length() )
        throw new IndexOutOfBoundsException();
    }

    private void put(int p0, T p1)
    {
      Object v3; // RETVAL
    
      v3 = GraphObject$Factory.access$200(p1);
      try
      {
        this.state.put(p0, v3);
      }
      catch ( org.json.JSONException v4 )
      {
        throw new IllegalArgumentException(v4);
      }
    }

    public final void add(int p0, T p1)
    {
      if ( p0 < 0 )
        throw new IndexOutOfBoundsException();
      if ( p0 < this.size() )
        throw new UnsupportedOperationException("Only adding items at the end of the list is supported.");
      this.put(p0, p1);
    }

    public final <U extends com.facebook.model.GraphObject> com.facebook.model.GraphObjectList<U> castToListOf(
            Class<U> p0)
    {
      if ( !com.facebook.model.GraphObject.class.isAssignableFrom(this.itemType) )
        throw new com.facebook.FacebookGraphObjectException("Can't cast GraphObjectCollection of non-GraphObject type "
                                                          + this.itemType);
      if ( !p0.isAssignableFrom(this.itemType) )
        return GraphObject$Factory.createList(this.state, p0);
      return (com.facebook.model.GraphObjectList<U>)this;
    }

    public final void clear()
    {
      throw new UnsupportedOperationException();
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      v2 = false;
      if ( p0 != null )
      {
        if ( this == p0 )
        {
          return true;
        }
        else if ( this.getClass() == p0.getClass() )
        {
          return this.state.equals(((com.facebook.model.GraphObject$Factory$GraphObjectListImpl)p0).state);
        }
      }
      return v2;
    }

    public final T get(int p0)
    {
      this.checkIndex(p0);
      return (T)GraphObject$Factory.coerceValueToExpectedType(this.state.opt(p0), this.itemType, null);
    }

    public final org.json.JSONArray getInnerJSONArray()
    {
      return this.state;
    }

    public final int hashCode()
    {
      return this.state.hashCode();
    }

    public final boolean remove(Object p0)
    {
      throw new UnsupportedOperationException();
    }

    public final boolean removeAll(java.util.Collection<?> p0)
    {
      throw new UnsupportedOperationException();
    }

    public final boolean retainAll(java.util.Collection<?> p0)
    {
      throw new UnsupportedOperationException();
    }

    public final T set(int p0, T p1)
    {
      Object result; // RETVAL
    
      this.checkIndex(p0);
      result = this.get(p0);
      this.put(p0, p1);
      return (T)result;
    }

    public final int size()
    {
      return this.state.length();
    }

    public final String toString()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = this.itemType.getSimpleName();
      v1[1] = this.state;
      return String.format("GraphObjectList{itemType=%s, state=%s}", v1);
    }

}
