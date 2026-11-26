// Decompiled from classes.dex (SourceFile: ActivityRecognitionResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.location;

import com.google.android.gms.internal.hn;
import java.util.Collections;
public class ActivityRecognitionResult implements com.google.android.gms.common.internal.safeparcel.SafeParcelable {
    // Fields
    public static final com.google.android.gms.location.ActivityRecognitionResultCreator CREATOR;
    public static java.lang.String a;
    java.util.List b;
    long c;
    long d;
    private final int e;

    // Methods
    static
    {
      CREATOR = new com.google.android.gms.location.ActivityRecognitionResultCreator();
    }

    private ActivityRecognitionResult(com.google.android.gms.location.DetectedActivity p0, long p1, long p3)
    {
      this(Collections.singletonList(p0), p1, p3);
    }

    private ActivityRecognitionResult(
            java.util.List<com.google.android.gms.location.DetectedActivity> p0,
            long p1,
            long p3)
    {
      super();
      boolean v4;
      boolean v5;
      v4 = false;
      v5 = p0 != null && p0.size() > 0;
      hn.b(v5, "Must have at least 1 detected activity");
      if ( p1 > 0 && p3 > 0 )
        v4 = true;
      hn.b(v4, "Must set times");
      this.e = 1;
      this.b = p0;
      this.c = p1;
      this.d = p3;
    
    }

    public ActivityRecognitionResult(
            java.util.List<com.google.android.gms.location.DetectedActivity> p0,
            long p1,
            long p3,
            byte p5)
    {
      super();
      this.e = 1;
      this.b = p0;
      this.c = p1;
      this.d = p3;
    }

    private int a(int p0)
    {
      java.util.Iterator v2;
      com.google.android.gms.location.DetectedActivity v3;
      v2 = this.b.iterator();
      while ( v2.hasNext() )
      {
        v3 = (com.google.android.gms.location.DetectedActivity)v2.next();
        if ( v3.a() == p0 )
          return v3.b();
      }
      return 0;
    }

    private com.google.android.gms.location.DetectedActivity b()
    {
      return (com.google.android.gms.location.DetectedActivity)this.b.get(0);
    }

    private java.util.List<com.google.android.gms.location.DetectedActivity> c()
    {
      return this.b;
    }

    private long d()
    {
      return this.c;
    }

    private long e()
    {
      return this.d;
    }

    public static com.google.android.gms.location.ActivityRecognitionResult extractResult(
            android.content.Intent p0)
    {
      if ( hasResult(p0) )
        return (com.google.android.gms.location.ActivityRecognitionResult)p0.getExtras().get("com.google.android.location.int" +
                                                                                             "ernal.EXTRA_ACTIVITY_RESULT");
      else
        return null;
    }

    public static boolean hasResult(android.content.Intent p0)
    {
      return p0 != null && p0.hasExtra("com.google.android.location.internal.EXTRA_ACTIVITY_RESULT");
    }

    public final int a()
    {
      return this.e;
    }

    public int describeContents()
    {
      return 0;
    }

    public String toString()
    {
      return "ActivityRecognitionResult [probableActivities="
           + this.b
           + ", timeMillis="
           + this.c
           + ", elapsedRealtimeMillis="
           + this.d
           + "]";
    }

    public void writeToParcel(android.os.Parcel p0, int p1)
    {
      ActivityRecognitionResultCreator.a(this, p0, p1);
    }

}
