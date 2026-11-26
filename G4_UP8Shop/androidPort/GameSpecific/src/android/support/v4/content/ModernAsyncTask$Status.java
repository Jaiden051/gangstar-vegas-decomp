// Decompiled from classes.dex (SourceFile: ModernAsyncTask$Status.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

public final class ModernAsyncTask$Status extends com.gameloft.android.DecompRT.EnumBase<ModernAsyncTask$Status> {
    // Fields
    private static final android.support.v4.content.ModernAsyncTask$Status[] $VALUES;
    public static final android.support.v4.content.ModernAsyncTask$Status FINISHED;
    public static final android.support.v4.content.ModernAsyncTask$Status PENDING;
    public static final android.support.v4.content.ModernAsyncTask$Status RUNNING;

    // Methods
    static
    {
      android.support.v4.content.ModernAsyncTask$Status[] v0;
      PENDING = new android.support.v4.content.ModernAsyncTask$Status("PENDING", 0);
      RUNNING = new android.support.v4.content.ModernAsyncTask$Status("RUNNING", 1);
      FINISHED = new android.support.v4.content.ModernAsyncTask$Status("FINISHED", 2);
      v0 = new android.support.v4.content.ModernAsyncTask$Status[3];
      v0[0] = PENDING;
      v0[1] = RUNNING;
      v0[2] = FINISHED;
      $VALUES = (android.support.v4.content.ModernAsyncTask$Status[])v0;
    }

    private ModernAsyncTask$Status(String p0, int p1)
    {
      super(p0, p1);
    }

    public static android.support.v4.content.ModernAsyncTask$Status valueOf(String p0)
    {
      return (android.support.v4.content.ModernAsyncTask$Status)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                                  android.support.v4.content.ModernAsyncTask$Status.class,
                                                                  p0);
    }

    public static android.support.v4.content.ModernAsyncTask$Status[] values()
    {
      return (android.support.v4.content.ModernAsyncTask$Status[])$VALUES.clone();
    }

}
