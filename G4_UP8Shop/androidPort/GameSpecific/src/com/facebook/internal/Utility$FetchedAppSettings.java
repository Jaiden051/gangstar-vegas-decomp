// Decompiled from classes.dex (SourceFile: Utility$FetchedAppSettings.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

public class Utility$FetchedAppSettings {
    // Fields
    private java.util.Map dialogConfigMap;
    private java.lang.String nuxContent;
    private boolean nuxEnabled;
    private boolean supportsImplicitLogging;

    // Methods
    private Utility$FetchedAppSettings(
            boolean p0,
            String p1,
            boolean p2,
            java.util.Map<String, java.util.Map<String, com.facebook.internal.Utility$DialogFeatureConfig>> p3)
    {
      super();
      this.supportsImplicitLogging = p0;
      this.nuxContent = p1;
      this.nuxEnabled = p2;
      this.dialogConfigMap = p3;
    }

    /* synthetic */ Utility$FetchedAppSettings(
            boolean p0,
            String p1,
            boolean p2,
            java.util.Map p3,
            com.facebook.internal.Utility$1 p4)
    {
      this(p0, p1, p2, p3);
    }

    public java.util.Map<String, java.util.Map<String, com.facebook.internal.Utility$DialogFeatureConfig>> getDialogConfigurations()
    {
      return this.dialogConfigMap;
    }

    public String getNuxContent()
    {
      return this.nuxContent;
    }

    public boolean getNuxEnabled()
    {
      return this.nuxEnabled;
    }

    public boolean supportsImplicitLogging()
    {
      return this.supportsImplicitLogging;
    }

}
