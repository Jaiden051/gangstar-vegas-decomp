// Decompiled from classes.dex (SourceFile: GraphObject$Factory$GraphObjectProxy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

import com.facebook.internal.Utility;
import java.lang.reflect.Proxy;
final class GraphObject$Factory$GraphObjectProxy extends com.facebook.model.GraphObject$Factory$ProxyBase {
    // Fields
    private static java.lang.String CASTTOMAP_METHOD;
    private static java.lang.String CAST_METHOD;
    private static java.lang.String CLEAR_METHOD;
    private static java.lang.String CONTAINSKEY_METHOD;
    private static java.lang.String CONTAINSVALUE_METHOD;
    private static java.lang.String ENTRYSET_METHOD;
    private static java.lang.String GETINNERJSONOBJECT_METHOD;
    private static java.lang.String GETPROPERTYASLIST_METHOD;
    private static java.lang.String GETPROPERTYAS_METHOD;
    private static java.lang.String GETPROPERTY_METHOD;
    private static java.lang.String GET_METHOD;
    private static java.lang.String ISEMPTY_METHOD;
    private static java.lang.String KEYSET_METHOD;
    private static java.lang.String PUTALL_METHOD;
    private static java.lang.String PUT_METHOD;
    private static java.lang.String REMOVEPROPERTY_METHOD;
    private static java.lang.String REMOVE_METHOD;
    private static java.lang.String SETPROPERTY_METHOD;
    private static java.lang.String SIZE_METHOD;
    private static java.lang.String VALUES_METHOD;
    private final java.lang.Class graphObjectClass;

    // Methods
    public GraphObject$Factory$GraphObjectProxy(org.json.JSONObject p0, Class<?> p1)
    {
      super(p0);
      this.graphObjectClass = p1;
    }

    private Object createGraphObjectsFromParameters(
            com.facebook.model.CreateGraphObject p0,
            Object p1)
    {
      String v3;
      com.facebook.model.GraphObjectList List;
      java.util.Iterator v5;
      Object v6;
      com.facebook.model.GraphObject v7; // RETVAL
      com.facebook.model.GraphObject v9; // RETVAL
    
      if ( p0 != null && !Utility.isNullOrEmpty(p0.value()) )
      {
        v3 = p0.value();
        if ( java.util.List.class.isAssignableFrom(p1.getClass()) )
        {
          List = GraphObject$Factory.createList(com.facebook.model.GraphObject.class);
          v5 = ((java.util.List)p1).iterator();
          while ( v5.hasNext() )
          {
            v6 = v5.next();
            v7 = GraphObject$Factory.create();
            v7.setProperty(v3, v6);
            List.add(v7);
          }
          return List;
        }
        else
        {
          v9 = GraphObject$Factory.create();
          v9.setProperty(v3, p1);
          return v9;
        }
      }
      return p1;
    }

    private final Object proxyGraphObjectGettersAndSetters(
            java.lang.reflect.Method p0,
            Object[] p1)
 throws org.json.JSONException {
      Object v3;
      String Name;
      int v5;
      com.facebook.model.PropertyName v6;
      String v7;
      Object v8;
      Class ReturnType;
      java.lang.reflect.Type GenericReturnType; // RETVAL
      java.lang.reflect.ParameterizedType v11;
      v3 = null;
      Name = p0.getName();
      v5 = p0.getParameterTypes().length;
      v6 = (com.facebook.model.PropertyName)p0.getAnnotation(com.facebook.model.PropertyName.class);
      if ( v6 != null )
        v7 = v6.value();
      else
        v7 = GraphObject$Factory.convertCamelCaseToLowercaseWithUnderscores(Name.substring(3));
      if ( v5 != 0 )
      {
        if ( v5 == 1 )
          ((org.json.JSONObject)this.state).putOpt(v7, GraphObject$Factory.access$200(
                                                         this.createGraphObjectsFromParameters((com.facebook.model.CreateGraphObject)p0.getAnnotation(com.facebook.model.CreateGraphObject.class), p1[0])));
        else
          return this.throwUnexpectedMethodSignature(p0);
      }
      else
      {
        v8 = ((org.json.JSONObject)this.state).opt(v7);
        ReturnType = p0.getReturnType();
        GenericReturnType = p0.getGenericReturnType();
        if ( GenericReturnType instanceof java.lang.reflect.ParameterizedType )
          v11 = (java.lang.reflect.ParameterizedType)GenericReturnType;
        else
          v11 = null;
        return GraphObject$Factory.coerceValueToExpectedType(v8, ReturnType, v11);
      }
      return v3;
    }

    private final Object proxyGraphObjectMethods(
            Object p0,
            java.lang.reflect.Method p1,
            Object[] p2)
    {
      String Name;
      Class v5;
      Name = p1.getName();
      if ( Name.equals("cast") )
      {
        v5 = (Class)p2[0];
        if ( v5 == null || !v5.isAssignableFrom(this.graphObjectClass) )
          return GraphObject$Factory.access$000(v5, (org.json.JSONObject)this.state);
      }
      else if ( Name.equals("getInnerJSONObject") )
      {
        return ((com.facebook.model.GraphObject$Factory$GraphObjectProxy)Proxy.getInvocationHandler(p0)).state;
      }
      else if ( Name.equals("asMap") )
      {
        return GraphObject$Factory.access$100((org.json.JSONObject)this.state);
      }
      else if ( Name.equals("getProperty") )
      {
        return ((org.json.JSONObject)this.state).opt((String)p2[0]);
      }
      else if ( Name.equals("getPropertyAs") )
      {
        return GraphObject$Factory.coerceValueToExpectedType(
                 ((org.json.JSONObject)this.state).opt((String)p2[0]),
                 (Class)p2[1],
                 null);
      }
      else if ( Name.equals("getPropertyAsList") )
      {
        return GraphObject$Factory.coerceValueToExpectedType(
                 ((org.json.JSONObject)this.state).opt((String)p2[0]),
                 com.facebook.model.GraphObjectList.class,
                 (java.lang.reflect.ParameterizedType)new com.facebook.model.GraphObject$Factory$GraphObjectProxy$1(this, (Class)p2[1]));
      }
      else if ( Name.equals("setProperty") )
      {
        return this.setJSONProperty(p2);
      }
      else if ( Name.equals("removeProperty") )
      {
        ((org.json.JSONObject)this.state).remove((String)p2[0]);
        return null;
      }
      else
      {
        return this.throwUnexpectedMethodSignature(p1);
      }
      return p0;
    }

    private final Object proxyMapMethods(java.lang.reflect.Method p0, Object[] p1)
    {
      String Name;
      java.util.Map v6;
      Name = p0.getName();
      if ( Name.equals("clear") )
      {
        JsonUtil.jsonObjectClear((org.json.JSONObject)this.state);
        return null;
      }
      else if ( Name.equals("containsKey") )
      {
        return Boolean.valueOf(((org.json.JSONObject)this.state).has((String)p1[0]));
      }
      else if ( Name.equals("containsValue") )
      {
        return Boolean.valueOf(JsonUtil.jsonObjectContainsValue((org.json.JSONObject)this.state, p1[0]));
      }
      else if ( Name.equals("entrySet") )
      {
        return JsonUtil.jsonObjectEntrySet((org.json.JSONObject)this.state);
      }
      else if ( Name.equals("get") )
      {
        return ((org.json.JSONObject)this.state).opt((String)p1[0]);
      }
      else if ( Name.equals("isEmpty") )
      {
        return Boolean.valueOf(((org.json.JSONObject)this.state).length() == 0);
      }
      else if ( Name.equals("keySet") )
      {
        return JsonUtil.jsonObjectKeySet((org.json.JSONObject)this.state);
      }
      else if ( Name.equals("put") )
      {
        return this.setJSONProperty(p1);
      }
      else if ( Name.equals("putAll") )
      {
        if ( p1[0] instanceof java.util.Map )
        {
          v6 = (java.util.Map)p1[0];
        }
        else
        {
          if ( !(p1[0] instanceof com.facebook.model.GraphObject) )
            return null;
          v6 = ((com.facebook.model.GraphObject)p1[0]).asMap();
        }
        JsonUtil.jsonObjectPutAll((org.json.JSONObject)this.state, v6);
        return null;
      }
      else if ( Name.equals("remove") )
      {
        ((org.json.JSONObject)this.state).remove((String)p1[0]);
        return null;
      }
      else if ( Name.equals("size") )
      {
        return Integer.valueOf(((org.json.JSONObject)this.state).length());
      }
      else if ( Name.equals("values") )
      {
        return JsonUtil.jsonObjectValues((org.json.JSONObject)this.state);
      }
      else
      {
        return this.throwUnexpectedMethodSignature(p0);
      }
    }

    private Object setJSONProperty(Object[] p0)
    {
      String v2;
      Object v3; // RETVAL
    
      v2 = (String)p0[0];
      v3 = GraphObject$Factory.access$200(p0[1]);
      try
      {
        ((org.json.JSONObject)this.state).putOpt(v2, v3);
        return null;
      }
      catch ( org.json.JSONException v5 )
      {
        throw new IllegalArgumentException(v5);
      }
    }

    public final Object invoke(Object p0, java.lang.reflect.Method p1, Object[] p2)
 throws IllegalAccessException, org.json.JSONException, java.lang.reflect.InvocationTargetException {
      Class DeclaringClass; // RETVAL
    
      DeclaringClass = p1.getDeclaringClass();
      if ( DeclaringClass == Object.class )
        return this.proxyObjectMethods(p0, p1, p2);
      if ( DeclaringClass == java.util.Map.class )
        return this.proxyMapMethods(p1, p2);
      if ( DeclaringClass == com.facebook.model.GraphObject.class )
        return this.proxyGraphObjectMethods(p0, p1, p2);
      if ( com.facebook.model.GraphObject.class.isAssignableFrom(DeclaringClass) )
        return this.proxyGraphObjectGettersAndSetters(p1, p2);
      return this.throwUnexpectedMethodSignature(p1);
    }

    public final String toString()
    {
      Object[] v1;
      v1 = new Object[2];
      v1[0] = this.graphObjectClass.getSimpleName();
      v1[1] = this.state;
      return String.format("GraphObject{graphObjectClass=%s, state=%s}", v1);
    }

}
