// Decompiled from classes.dex (SourceFile: GraphObject$Factory.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.model;

import com.facebook.internal.Utility;
import java.lang.reflect.Proxy;
import java.util.Locale;
public final class GraphObject$Factory {
    // Fields
    private static final java.text.SimpleDateFormat[] dateFormats;
    private static final java.util.HashSet verifiedGraphObjectClasses;

    // Methods
    static
    {
      java.text.SimpleDateFormat[] v0;
      verifiedGraphObjectClasses = new java.util.HashSet();
      v0 = new java.text.SimpleDateFormat[3];
      v0[0] = new java.text.SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ssZ", Locale.US);
      v0[1] = new java.text.SimpleDateFormat("yyyy-MM-dd'T'HH:mm:ss", Locale.US);
      v0[2] = new java.text.SimpleDateFormat("yyyy-MM-dd", Locale.US);
      dateFormats = (java.text.SimpleDateFormat[])v0;
    }

    private GraphObject$Factory()
    {
      super();
    }

    /* synthetic */ static com.facebook.model.GraphObject access$000(Class p0, org.json.JSONObject p1)
    {
      return createGraphObjectProxy(p0, p1);
    }

    /* synthetic */ static java.util.Map access$100(org.json.JSONObject p0)
    {
      return createGraphObjectProxyForMap(p0);
    }

    /* synthetic */ static Object access$200(Object p0)
    {
      return getUnderlyingJSONObject(p0);
    }

    static <U> U coerceValueToExpectedType(
            Object p0,
            Class<U> p1,
            java.lang.reflect.ParameterizedType p2)
    {
      Class Class = null;
      java.lang.reflect.Type[] ActualTypeArguments = null; // RETVAL
      Class v6 = null;
      Object[] v7 = null;
      Object[] v8 = null;
      java.text.SimpleDateFormat[] v9 = null;
      int v10 = 0;
      int i = 0;
      java.text.SimpleDateFormat v12 = null;
      java.util.Date v13 = null; // RETVAL
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( p0 == null )
            {
            if ( Boolean.TYPE.equals(p1) )
            return (U)Boolean.valueOf(false);
            if ( Character.TYPE.equals(p1) )
            return (U)Character.valueOf((char)0);
            if ( p1.isPrimitive() )
            return (U)Integer.valueOf(0);
            return null;
            }
            Class = p0.getClass();
            if ( !(!p1.isAssignableFrom(Class) && !p1.isPrimitive()) ) { _pc = 3; continue _sm; }
            if ( com.facebook.model.GraphObject.class.isAssignableFrom(p1) )
            {
            if ( org.json.JSONObject.class.isAssignableFrom(Class) )
            return (U)createGraphObjectProxy((Class)p1, (org.json.JSONObject)p0);
            if ( !com.facebook.model.GraphObject.class.isAssignableFrom(Class) )
            throw new com.facebook.FacebookGraphObjectException("Can't create GraphObject from " + Class.getName());
            return (U)((com.facebook.model.GraphObject)p0).cast((Class)p1);
            }
            if ( Iterable.class.equals(p1)
            || java.util.Collection.class.equals(p1)
            || java.util.List.class.equals(p1)
            || com.facebook.model.GraphObjectList.class.equals(p1) )
            {
            if ( p2 == null )
            throw new com.facebook.FacebookGraphObjectException("can't infer generic type of: " + p1.toString());
            ActualTypeArguments = p2.getActualTypeArguments();
            if ( ActualTypeArguments == null || ActualTypeArguments.length != 1 || !(ActualTypeArguments[0] instanceof Class) )
            throw new com.facebook.FacebookGraphObjectException("Expect collection properties to be of a type with exactly on" +
            "e generic parameter.");
            v6 = (Class)ActualTypeArguments[0];
            if ( !org.json.JSONArray.class.isAssignableFrom(Class) )
            throw new com.facebook.FacebookGraphObjectException("Can't create Collection from " + Class.getName());
            return (U)createList((org.json.JSONArray)p0, v6);
            }
            if ( !(String.class.equals(p1)) ) { _pc = 2; continue _sm; }
            if ( Double.class.isAssignableFrom(Class) || Float.class.isAssignableFrom(Class) )
            {
            v7 = new Object[1];
            v7[0] = p0;
            return (U)String.format("%f", v7);
            }
            if ( Number.class.isAssignableFrom(Class) )
            {
            v8 = new Object[1];
            v8[0] = p0;
            return (U)String.format("%d", v8);
            }
            _pc = 1;
            continue _sm;
          case 1:
            throw new com.facebook.FacebookGraphObjectException("Can't convert type" + Class.getName() + " to " + p1.getName());
          case 2:
            if ( !java.util.Date.class.equals(p1) || !String.class.isAssignableFrom(Class) )
            { _pc = 1; continue _sm; }
            v9 = dateFormats;
            v10 = v9.length;
            for ( i = 0; ; ++i )
            {
            if ( i >= v10 )
            { _pc = 1; continue _sm; }
            v12 = v9[i];
            try
            {
            v13 = v12.parse((String)p0);
            if ( v13 != null )
            return (U)v13;
            continue;
            }
            catch ( java.text.ParseException e )
            {
            }
            }


          case 3:
            return (U)p0;
        }
      }
}

    static String convertCamelCaseToLowercaseWithUnderscores(String p0)
    {
      return p0.replaceAll("([a-z])([A-Z])", "$1_$2").toLowerCase(Locale.US);
    }

    public static com.facebook.model.GraphObject create()
    {
      return create(com.facebook.model.GraphObject.class);
    }

    public static <T extends com.facebook.model.GraphObject> T create(Class<T> p0)
    {
      return createGraphObjectProxy(p0, new org.json.JSONObject());
    }

    public static com.facebook.model.GraphObject create(org.json.JSONObject p0)
    {
      return create(p0, com.facebook.model.GraphObject.class);
    }

    public static <T extends com.facebook.model.GraphObject> T create(
            org.json.JSONObject p0,
            Class<T> p1)
    {
      return createGraphObjectProxy(p1, p0);
    }

    private static <T extends com.facebook.model.GraphObject> T createGraphObjectProxy(
            Class<T> p0,
            org.json.JSONObject p1)
    {
      Class[] v2;
      verifyCanProxyClass(p0);
      v2 = new Class[1];
      v2[0] = p0;
      return (T)Proxy.newProxyInstance(
                                               com.facebook.model.GraphObject.class.getClassLoader(),
                                               v2,
                                               (java.lang.reflect.InvocationHandler)new com.facebook.model.GraphObject$Factory$GraphObjectProxy(p1, p0));
    }

    private static java.util.Map<String, Object> createGraphObjectProxyForMap(org.json.JSONObject p0)
    {
      Class[] v1;
      v1 = new Class[1];
      v1[0] = java.util.Map.class;
      return (java.util.Map)Proxy.newProxyInstance(
                              com.facebook.model.GraphObject.class.getClassLoader(),
                              v1,
                              (java.lang.reflect.InvocationHandler)new com.facebook.model.GraphObject$Factory$GraphObjectProxy(p0, java.util.Map.class));
    }

    public static <T> com.facebook.model.GraphObjectList<T> createList(Class<T> p0)
    {
      return createList(new org.json.JSONArray(), p0);
    }

    public static <T> com.facebook.model.GraphObjectList<T> createList(
            org.json.JSONArray p0,
            Class<T> p1)
    {
      return new com.facebook.model.GraphObject$Factory$GraphObjectListImpl(p0, p1);
    }

    private static Object getUnderlyingJSONObject(Object p0)
    {
      Class Class;
      org.json.JSONArray v3;
      java.util.Iterator v4;
      Object v5;
      if ( p0 == null )
        return null;
      Class = p0.getClass();
      if ( com.facebook.model.GraphObject.class.isAssignableFrom(Class) )
        return ((com.facebook.model.GraphObject)p0).getInnerJSONObject();
      if ( com.facebook.model.GraphObjectList.class.isAssignableFrom(Class) )
        return ((com.facebook.model.GraphObjectList)p0).getInnerJSONArray();
      if ( Iterable.class.isAssignableFrom(Class) )
      {
        v3 = new org.json.JSONArray();
        v4 = ((Iterable)p0).iterator();
        while ( v4.hasNext() )
        {
          v5 = v4.next();
          if ( com.facebook.model.GraphObject.class.isAssignableFrom(v5.getClass()) )
            v3.put(((com.facebook.model.GraphObject)v5).getInnerJSONObject());
          else
            v3.put(v5);
        }
        return v3;
      }
      return p0;
    }

    private static synchronized <T extends com.facebook.model.GraphObject> boolean hasClassBeenVerified(
            Class<T> p0)
    {
      return verifiedGraphObjectClasses.contains(p0);
    }

    public static boolean hasSameId(
            com.facebook.model.GraphObject p0,
            com.facebook.model.GraphObject p1)
    {
      boolean v2;
      Object Property;
      Object v5; // RETVAL
    
      v2 = false;
      if ( p0 != null && p1 != null && p0.asMap().containsKey("id") && p1.asMap().containsKey("id") )
      {
        if ( p0.equals(p1) )
        {
          return true;
        }
        else
        {
          Property = p0.getProperty("id");
          v5 = p1.getProperty("id");
          if ( Property != null && v5 != null && Property instanceof String && v5 instanceof String )
            return Property.equals(v5);
        }
      }
      return v2;
    }

    private static synchronized <T extends com.facebook.model.GraphObject> void recordClassHasBeenVerified(
            Class<T> p0)
    {
      verifiedGraphObjectClasses.add(p0);
    }

    private static <T extends com.facebook.model.GraphObject> void verifyCanProxyClass(Class<T> p0)
    {
      java.lang.reflect.Method[] Methods = null;
      int v2 = 0;
      int i = 0;
      java.lang.reflect.Method v4 = null;
      String Name = null;
      int v6 = 0;
      Class ReturnType = null;
      boolean isAnnotationPresent = false;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !(!hasClassBeenVerified(p0)) ) { _pc = 7; continue _sm; }
            if ( !p0.isInterface() )
            throw new com.facebook.FacebookGraphObjectException("Factory can only wrap interfaces, not class: " + p0.getName());
            Methods = p0.getMethods();
            v2 = Methods.length;
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(i < v2) ) { _pc = 6; continue _sm; }
            v4 = Methods[i];
            Name = v4.getName();
            v6 = v4.getParameterTypes().length;
            ReturnType = v4.getReturnType();
            isAnnotationPresent = v4.isAnnotationPresent(com.facebook.model.PropertyName.class);
            if ( !(!v4.getDeclaringClass().isAssignableFrom(com.facebook.model.GraphObject.class)) ) { _pc = 5; continue _sm; }
            if ( !(v6 == 1 && ReturnType == Void.TYPE) ) { _pc = 2; continue _sm; }
            {
            if ( isAnnotationPresent )
            {
            if ( Utility.isNullOrEmpty(((com.facebook.model.PropertyName)v4.getAnnotation(com.facebook.model.PropertyName.class)).value()) )
            { _pc = 3; continue _sm; }
            }
            else if ( !Name.startsWith("set") || Name.length() <= 3 )
            {
            { _pc = 3; continue _sm; }
            }
            }
            _pc = 5;
            continue _sm;
          case 2:
            if ( v6 != 0 || ReturnType == Void.TYPE ) { _pc = 3; continue _sm; } else { _pc = 4; continue _sm; }
          case 3:
            throw new com.facebook.FacebookGraphObjectException("Factory can't proxy method: " + v4.toString());
          case 4:
            if ( isAnnotationPresent )
            {
            if ( Utility.isNullOrEmpty(((com.facebook.model.PropertyName)v4.getAnnotation(com.facebook.model.PropertyName.class)).value()) )
            { _pc = 3; continue _sm; }
            }
            else if ( !Name.startsWith("get") || Name.length() <= 3 )
            {
            { _pc = 3; continue _sm; }
            }
            _pc = 5;
            continue _sm;
          case 5:
            ++i;
            _pc = 1;
            continue _sm;
          case 6:
            recordClassHasBeenVerified(p0);
            _pc = 7;
            continue _sm;
          case 7:
            return;
        }
      }
}

}
