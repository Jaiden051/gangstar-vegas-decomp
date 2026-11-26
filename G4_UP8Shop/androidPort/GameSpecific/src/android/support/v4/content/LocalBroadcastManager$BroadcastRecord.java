// Decompiled from classes.dex (SourceFile: LocalBroadcastManager$BroadcastRecord.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.content;

class LocalBroadcastManager$BroadcastRecord {
    // Fields
    final android.content.Intent intent;
    final java.util.ArrayList receivers;

    // Methods
    LocalBroadcastManager$BroadcastRecord(
            android.content.Intent p0,
            java.util.ArrayList<android.support.v4.content.LocalBroadcastManager$ReceiverRecord> p1)
    {
      super();
      this.intent = p0;
      this.receivers = p1;
    }

}
