// Decompiled from classes.dex (SourceFile: MediationServerParameters.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads.mediation;

import com.google.android.gms.internal.ev;
public abstract class MediationServerParameters {
    // Methods
    public MediationServerParameters()
    {
      super();
    }

    private static void a()
    {
      ;
    }

    public final void a(java.util.Map<String, String> p0)
 throws com.google.ads.mediation.g {
      java.util.Map v2;
      java.lang.reflect.Field[] Fields;
      int v4;
      int i;
      java.lang.reflect.Field v6;
      com.google.ads.mediation.h v7;
      java.util.Iterator v8;
      java.util.Map.Entry v9;
      java.lang.reflect.Field v10;
      StringBuilder v11;
      java.util.Iterator v12;
      java.lang.reflect.Field v13;
      v2 = new java.util.HashMap();
      Fields = this.getClass().getFields();
      v4 = Fields.length;
      for ( i = 0; i < v4; ++i )
      {
        v6 = Fields[i];
        v7 = (com.google.ads.mediation.h)v6.getAnnotation(com.google.ads.mediation.h.class);
        if ( v7 != null )
          v2.put(v7.a(), v6);
      }
      if ( v2.isEmpty() )
        ev.D(
          "No server options fields detected. To suppress this message either add a field with the @Parameter annotation, or " +
          "override the load() method.");
      v8 = p0.entrySet().iterator();
      while ( v8.hasNext() )
      {
        v9 = (java.util.Map.Entry)v8.next();
        v10 = (java.lang.reflect.Field)v2.remove(v9.getKey());
        if ( v10 == null )
        {
          ev.z("Unexpected server option: " + (String)v9.getKey() + " = \"" + (String)v9.getValue() + "\"");
          continue;
        }
        try
        {
          v10.set(this, v9.getValue());
        }
        catch ( IllegalAccessException e )
        {
          ev.D("Server option \"" + (String)v9.getKey() + "\" could not be set: Illegal Access");
          continue;
        }
        catch ( IllegalArgumentException e )
        {
          ev.D("Server option \"" + (String)v9.getKey() + "\" could not be set: Bad Type");
        }
      }
      v11 = new StringBuilder();
      v12 = v2.values().iterator();
      while ( v12.hasNext() )
      {
        v13 = (java.lang.reflect.Field)v12.next();
        if ( ((com.google.ads.mediation.h)v13.getAnnotation(com.google.ads.mediation.h.class)).b() )
        {
          ev.D(
            "Required server option missing: "
          + ((com.google.ads.mediation.h)v13.getAnnotation(com.google.ads.mediation.h.class)).a());
          if ( v11.length() > 0 )
            v11.append(", ");
          v11.append(((com.google.ads.mediation.h)v13.getAnnotation(com.google.ads.mediation.h.class)).a());
        }
      }
      if ( v11.length() > 0 )
        throw new com.google.ads.mediation.g("Required server option(s) missing: " + v11.toString());
    }

}
