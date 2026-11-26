// Decompiled from classes.dex (SourceFile: TaskStackBuilderHoneycomb.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

import android.app.PendingIntent;
class TaskStackBuilderHoneycomb {
    // Methods
    TaskStackBuilderHoneycomb()
    {
      super();
    }

    public static android.app.PendingIntent getActivitiesPendingIntent(
            android.content.Context p0,
            int p1,
            android.content.Intent[] p2,
            int p3)
    {
      return PendingIntent.getActivities(p0, p1, p2, p3);
    }

}
