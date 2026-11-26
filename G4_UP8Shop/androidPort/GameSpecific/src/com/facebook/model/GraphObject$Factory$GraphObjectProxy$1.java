// Decompiled from classes.dex (SourceFile: GraphObject$Factory$GraphObjectProxy$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

class GraphObject$Factory$GraphObjectProxy$1 implements java.lang.reflect.ParameterizedType {
    // Fields
    final com.facebook.model.GraphObject$Factory$GraphObjectProxy this$0;
    final java.lang.Class val$expectedType;

    // Methods
    GraphObject$Factory$GraphObjectProxy$1(com.facebook.model.GraphObject$Factory$GraphObjectProxy p0, Class p1)
    {
      super();
      this.this$0 = p0;
      this.val$expectedType = p1;
    
    }

    public java.lang.reflect.Type[] getActualTypeArguments()
    {
      java.lang.reflect.Type[] v1;
      v1 = new java.lang.reflect.Type[1];
      v1[0] = this.val$expectedType;
      return (java.lang.reflect.Type[])v1;
    }

    public java.lang.reflect.Type getOwnerType()
    {
      return null;
    }

    public java.lang.reflect.Type getRawType()
    {
      return com.facebook.model.GraphObjectList.class;
    }

}
