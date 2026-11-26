// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.dynamic;

import android.os.Binder;
public final class e<T> extends com.google.android.gms.dynamic.d$a {
    // Fields
    private final java.lang.Object a;

    // Methods
    private e(T p0)
    {
      super();
      this.a = p0;
    }

    public static <T> T e(com.google.android.gms.dynamic.d p0)
    {
      android.os.IBinder v3;
      java.lang.reflect.Field[] DeclaredFields; // RETVAL
      java.lang.reflect.Field v5;
      if ( p0 instanceof com.google.android.gms.dynamic.e )
        return (T)((com.google.android.gms.dynamic.e)p0).a;
      v3 = p0.asBinder();
      DeclaredFields = v3.getClass().getDeclaredFields();
      if ( DeclaredFields.length != 1 )
        throw new IllegalArgumentException("The concrete class implementing IObjectWrapper must have exactly *one* declared p" +
                                           "rivate field for the wrapped object.  Preferably, this is an instance of the Obje" +
                                           "ctWrapper<T> class.");
      v5 = DeclaredFields[0];
      if ( v5.isAccessible() )
        throw new IllegalArgumentException("The concrete class implementing IObjectWrapper must have exactly one declared *pr" +
                                           "ivate* field for the wrapped object. Preferably, this is an instance of the Objec" +
                                           "tWrapper<T> class.");
      v5.setAccessible(true);
      try
      {
        return (T)v5.get(v3);
      }
      catch ( NullPointerException v7 )
      {
        throw new IllegalArgumentException("Binder object is null.", v7);
      }
      catch ( IllegalArgumentException v8 )
      {
        throw new IllegalArgumentException("remoteBinder is the wrong class.", v8);
      }
      catch ( IllegalAccessException v9 )
      {
        throw new IllegalArgumentException("Could not access the field in remoteBinder.", v9);
      }
    }

    public static <T> com.google.android.gms.dynamic.d h(T p0)
    {
      return new com.google.android.gms.dynamic.e(p0);
    }

}
