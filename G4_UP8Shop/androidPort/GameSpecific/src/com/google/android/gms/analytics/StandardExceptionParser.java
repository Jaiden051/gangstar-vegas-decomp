// Decompiled from classes.dex (SourceFile: StandardExceptionParser.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

public class StandardExceptionParser implements com.google.android.gms.analytics.ExceptionParser {
    // Fields
    private final java.util.TreeSet a;

    // Methods
    public StandardExceptionParser(android.content.Context p0, java.util.Collection<String> p1)
    {
      super();
      this.a = new java.util.TreeSet();
      this.a(p0, p1);
    }

    private StackTraceElement a(Throwable p0)
    {
      StackTraceElement[] StackTrace; // RETVAL
      StackTraceElement[] v3;
      int v6;
      int i;
      StackTraceElement v8;
      String ClassName;
      java.util.Iterator v10;
      StackTrace = p0.getStackTrace();
      v3 = StackTrace;
      if ( StackTrace == null || StackTrace.length == 0 )
        return null;
      v6 = StackTrace.length;
      for ( i = 0; i < v6; ++i )
      {
        v8 = v3[i];
        ClassName = v8.getClassName();
        v10 = this.a.iterator();
        while ( v10.hasNext() )
        {
          if ( ClassName.startsWith((String)v10.next()) )
            return v8;
        }
      }
      return v3[0];
    }

    private void a(android.content.Context p0, java.util.Collection<String> p1)
    {
      java.util.Set v3;
      String PackageName;
      android.content.pm.ActivityInfo[] v5;
      int v6;
      int i;
      java.util.Iterator v8;
      String v9;
      java.util.Iterator v10;
      int v11;
      String v12;
      this.a.clear();
      v3 = new java.util.HashSet();
      if ( p1 != null )
        v3.addAll(p1);
      if ( p0 != null )
      {
        try
        {
          PackageName = p0.getApplicationContext().getPackageName();
          this.a.add(PackageName);
          v5 = (p0.getApplicationContext().getPackageManager().getPackageInfo(PackageName, 15)).activities;
          if ( v5 != null )
          {
            v6 = v5.length;
            for ( i = 0; i < v6; ++i )
              v3.add((v5[i]).packageName);
          }
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException e )
        {
          aa.B("No package found");
        }
      }
      v8 = v3.iterator();
      while ( v8.hasNext() )
      {
        v9 = (String)v8.next();
        v10 = this.a.iterator();
        v11 = 1;
        while ( v10.hasNext() )
        {
          v12 = (String)v10.next();
          if ( !v9.startsWith(v12) )
          {
            if ( v12.startsWith(v9) )
              this.a.remove(v12);
            break;
          }
          v11 = 0;
        }
        if ( v11 != 0 )
          this.a.add(v9);
      }
    }

    private static Throwable getCause(Throwable p0)
    {
      while ( p0.getCause() != null )
        p0 = p0.getCause();
      return p0;
    }

    private static String getDescription(Throwable p0, StackTraceElement p1, String p2)
    {
      StringBuilder v3;
      String[] v4; // RETVAL
      String v5;
      Object[] v6;
      Object[] v7;
      v3 = new StringBuilder();
      v3.append(p0.getClass().getSimpleName());
      if ( p1 != null )
      {
        v4 = p1.getClassName().split("\\.");
        v5 = "unknown";
        if ( v4 != null && v4.length > 0 )
          v5 = v4[v4.length - 1];
        v6 = new Object[3];
        v6[0] = v5;
        v6[1] = p1.getMethodName();
        v6[2] = Integer.valueOf(p1.getLineNumber());
        v3.append(String.format(" (@%s:%s:%s)", v6));
      }
      if ( p2 != null )
      {
        v7 = new Object[1];
        v7[0] = p2;
        v3.append(String.format(" {%s}", v7));
      }
      return v3.toString();
    }

    public final String a(String p0, Throwable p1)
    {
      Throwable Cause = null;
      StackTraceElement[] StackTrace; // RETVAL
      StackTraceElement[] v5;
      StackTraceElement v6 = null;
      StringBuilder v7;
      String[] v8; // RETVAL
      String v9;
      Object[] v10;
      Object[] v11;
      int v13;
      int i;
      StackTraceElement v15;
      String ClassName;
      java.util.Iterator v17;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            Cause = getCause(p1);
            StackTrace = getCause(p1).getStackTrace();
            v5 = StackTrace;
            if ( StackTrace != null && StackTrace.length != 0 )
            {
            v13 = StackTrace.length;
            for ( i = 0; i < v13; ++i )
            {
            v15 = v5[i];
            ClassName = v15.getClassName();
            v17 = this.a.iterator();
            while ( v17.hasNext() )
            {
            if ( ClassName.startsWith((String)v17.next()) )
            {
            v6 = v15;
            { _pc = 1; continue _sm; }
            }
            }
            }
            v6 = v5[0];
            }
            else
            {
            v6 = null;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v7 = new StringBuilder();
            v7.append(Cause.getClass().getSimpleName());
            if ( v6 != null )
            {
            v8 = v6.getClassName().split("\\.");
            v9 = "unknown";
            if ( v8 != null && v8.length > 0 )
            v9 = v8[v8.length - 1];
            v10 = new Object[3];
            v10[0] = v9;
            v10[1] = v6.getMethodName();
            v10[2] = Integer.valueOf(v6.getLineNumber());
            v7.append(String.format(" (@%s:%s:%s)", v10));
            }
            if ( p0 != null )
            {
            v11 = new Object[1];
            v11[0] = p0;
            v7.append(String.format(" {%s}", v11));
            }
            return v7.toString();
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

}
