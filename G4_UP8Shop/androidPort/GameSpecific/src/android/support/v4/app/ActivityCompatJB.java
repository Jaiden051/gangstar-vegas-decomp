// Decompiled from classes.dex (SourceFile: ActivityCompatJB.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

class ActivityCompatJB {
    // Methods
    ActivityCompatJB()
    {
      super();
    }

    public static void finishAffinity(android.app.Activity p0)
    {
      p0.finishAffinity();
    }

    public static void startActivity(
            android.content.Context p0,
            android.content.Intent p1,
            android.os.Bundle p2)
    {
      p0.startActivity(p1, p2);
    }

    public static void startActivityForResult(
            android.app.Activity p0,
            android.content.Intent p1,
            int p2,
            android.os.Bundle p3)
    {
      p0.startActivityForResult(p1, p2, p3);
    }

}
