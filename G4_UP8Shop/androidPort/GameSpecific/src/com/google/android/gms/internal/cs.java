// Decompiled from classes.dex (SourceFile: cs.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class cs {
    // Fields
    private java.lang.Object a;
    private final android.content.Context b;

    // Methods
    public cs(android.content.Context p0)
    {
      super();
      this.b = p0;
    }

    public final int a(String p0, String p1)
    {
      Class Class;
      Class[] v4;
      java.lang.reflect.Method DeclaredMethod;
      Object v6;
      Object[] v7;
      try
      {
        Class = this.b.getClassLoader().loadClass("com.android.vending.billing.IInAppBillingService");
        v4 = new Class[3];
        v4[0] = Integer.TYPE;
        v4[1] = String.class;
        v4[2] = String.class;
        DeclaredMethod = Class.getDeclaredMethod("consumePurchase", v4);
        v6 = Class.cast(this.a);
        v7 = new Object[3];
        v7[0] = Integer.valueOf(3);
        v7[1] = p0;
        v7[2] = p1;
        return ((Integer)DeclaredMethod.invoke(v6, v7)).intValue();
      }
      catch ( Exception v10 )
      {
        ev.c(
          "IInAppBillingService is not available, please add com.android.vending.billing.IInAppBillingService to project.",
          v10);
        return 5;
      }
    }

    public final android.os.Bundle a(String p0, String p1, String p2)
    {
      Class Class;
      Class[] v5;
      java.lang.reflect.Method DeclaredMethod;
      Object v7;
      Object[] v8;
      try
      {
        Class = this.b.getClassLoader().loadClass("com.android.vending.billing.IInAppBillingService");
        v5 = new Class[5];
        v5[0] = Integer.TYPE;
        v5[1] = String.class;
        v5[2] = String.class;
        v5[3] = String.class;
        v5[4] = String.class;
        DeclaredMethod = Class.getDeclaredMethod("getBuyIntent", v5);
        v7 = Class.cast(this.a);
        v8 = new Object[5];
        v8[0] = Integer.valueOf(3);
        v8[1] = p0;
        v8[2] = p1;
        v8[3] = "inapp";
        v8[4] = p2;
        return (android.os.Bundle)DeclaredMethod.invoke(v7, v8);
      }
      catch ( Exception v11 )
      {
        ev.c(
          "IInAppBillingService is not available, please add com.android.vending.billing.IInAppBillingService to project.",
          v11);
        return null;
      }
    }

    public final void a()
    {
      this.a = null;
    }

    public final void a(android.os.IBinder p0)
    {
      Class[] v2;
      java.lang.reflect.Method DeclaredMethod; // RETVAL
      Object[] v4;
      try
      {
        v2 = new Class[1];
        v2[0] = android.os.IBinder.class;
        DeclaredMethod = this.b.getClassLoader().loadClass("com.android.vending.billing.IInAppBillingService$Stub").getDeclaredMethod("asInterface", v2);
        v4 = new Object[1];
        v4[0] = p0;
        this.a = DeclaredMethod.invoke(null, v4);
      }
      catch ( Exception e )
      {
        ev.D("IInAppBillingService is not available, please add com.android.vending.billing.IInAppBillingService to project.");
      }
    }

    public final android.os.Bundle b(String p0, String p1)
    {
      Class Class;
      Class[] v4;
      java.lang.reflect.Method DeclaredMethod;
      Object v6;
      Object[] v7;
      try
      {
        Class = this.b.getClassLoader().loadClass("com.android.vending.billing.IInAppBillingService");
        v4 = new Class[4];
        v4[0] = Integer.TYPE;
        v4[1] = String.class;
        v4[2] = String.class;
        v4[3] = String.class;
        DeclaredMethod = Class.getDeclaredMethod("getPurchases", v4);
        v6 = Class.cast(this.a);
        v7 = new Object[4];
        v7[0] = Integer.valueOf(3);
        v7[1] = p0;
        v7[2] = "inapp";
        v7[3] = p1;
        return (android.os.Bundle)DeclaredMethod.invoke(v6, v7);
      }
      catch ( Exception v10 )
      {
        ev.c(
          "IInAppBillingService is not available, please add com.android.vending.billing.IInAppBillingService to project.",
          v10);
        return null;
      }
    }

}
