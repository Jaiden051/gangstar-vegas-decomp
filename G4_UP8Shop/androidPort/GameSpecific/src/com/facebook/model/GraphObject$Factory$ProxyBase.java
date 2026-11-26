// Decompiled from classes.dex (SourceFile: GraphObject$Factory$ProxyBase.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

import java.lang.reflect.Proxy;
abstract class GraphObject$Factory$ProxyBase<STATE> implements java.lang.reflect.InvocationHandler {
    // Fields
    private static java.lang.String EQUALS_METHOD;
    private static java.lang.String TOSTRING_METHOD;
    protected final java.lang.Object state;

    // Methods
    protected GraphObject$Factory$ProxyBase(STATE p0)
    {
      super();
      this.state = p0;
    }

    protected final Object proxyObjectMethods(
            Object p0,
            java.lang.reflect.Method p1,
            Object[] p2)
 throws IllegalAccessException, java.lang.reflect.InvocationTargetException {
      String Name;
      Object v5;
      java.lang.reflect.InvocationHandler InvocationHandler; // RETVAL
    
      Name = p1.getName();
      if ( Name.equals("equals") )
      {
        v5 = p2[0];
        if ( v5 != null
          && (com.gameloft.android.DecompRT.comma((InvocationHandler = Proxy.getInvocationHandler(v5)), (InvocationHandler instanceof com.facebook.model.GraphObject$Factory$GraphObjectProxy))) )
        {
          return Boolean.valueOf(this.state.equals(((com.facebook.model.GraphObject$Factory$GraphObjectProxy)InvocationHandler).state));
        }
        else
        {
          return Boolean.valueOf(false);
        }
      }
      else if ( Name.equals("toString") )
      {
        return this.toString();
      }
      else
      {
        return p1.invoke(this.state, p2);
      }
    }

    protected final Object throwUnexpectedMethodSignature(java.lang.reflect.Method p0)
    {
      throw new com.facebook.FacebookGraphObjectException(this.getClass().getName()
                                                        + " got an unexpected method signature: "
                                                        + p0.toString());
    }

}
