// Decompiled from classes.dex (SourceFile: IntentCompat$IntentCompatImplBase.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class IntentCompat$IntentCompatImplBase implements android.support.v4.content.IntentCompat$IntentCompatImpl {
    // Methods
    IntentCompat$IntentCompatImplBase()
    {
      super();
    }

    public android.content.Intent makeMainActivity(android.content.ComponentName p0)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.MAIN");
      v2.setComponent(p0);
      v2.addCategory("android.intent.category.LAUNCHER");
      return v2;
    }

    public android.content.Intent makeMainSelectorActivity(String p0, String p1)
    {
      android.content.Intent v3;
      v3 = new android.content.Intent(p0);
      v3.addCategory(p1);
      return v3;
    }

    public android.content.Intent makeRestartActivityTask(
            android.content.ComponentName p0)
    {
      android.content.Intent MainActivity;
      MainActivity = this.makeMainActivity(p0);
      MainActivity.addFlags(268468224);
      return MainActivity;
    }

}
