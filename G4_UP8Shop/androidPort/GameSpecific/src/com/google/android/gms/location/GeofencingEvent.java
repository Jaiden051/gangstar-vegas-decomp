// Decompiled from classes.dex (SourceFile: GeofencingEvent.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import com.google.android.gms.internal.ji;
public class GeofencingEvent {
    // Fields
    private final int a;
    private final int b;
    private final java.util.List c;
    private final android.location.Location d;

    // Methods
    private GeofencingEvent(
            int p0,
            int p1,
            java.util.List<com.google.android.gms.location.Geofence> p2,
            android.location.Location p3)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
    }

    private boolean a()
    {
      return this.a != -1;
    }

    private int b()
    {
      return this.a;
    }

    private int c()
    {
      return this.b;
    }

    private java.util.List<com.google.android.gms.location.Geofence> d()
    {
      return this.c;
    }

    private android.location.Location e()
    {
      return this.d;
    }

    public static com.google.android.gms.location.GeofencingEvent fromIntent(android.content.Intent p0)
    {
      if ( p0 != null )
        return new com.google.android.gms.location.GeofencingEvent(p0.getIntExtra("gms_error_code", -1), getGeofenceTransition(p0), getTriggeringGeofences(p0), (android.location.Location)p0.getParcelableExtra("com.google.android.location.intent.extra.triggering_location"));
      else
        return null;
    }

    private static int getGeofenceTransition(android.content.Intent p0)
    {
      int v1;
      int IntExtra; // RETVAL
    
      v1 = -1;
      IntExtra = p0.getIntExtra("com.google.android.location.intent.extra.transition", -1);
      if ( IntExtra != -1 && (IntExtra == 1 || IntExtra == 2 || IntExtra == 4) )
        return IntExtra;
      return v1;
    }

    private static java.util.List<com.google.android.gms.location.Geofence> getTriggeringGeofences(
            android.content.Intent p0)
    {
      java.util.ArrayList v1;
      java.util.ArrayList v4;
      java.util.Iterator i;
      v1 = (java.util.ArrayList)p0.getSerializableExtra("com.google.android.location.intent.extra.geofence_list");
      if ( v1 == null )
        return null;
      v4 = new java.util.ArrayList(v1.size());
      for ( i = v1.iterator(); i.hasNext(); v4.add(ji.h((byte[])i.next())) )
        ;
      return v4;
    }

}
