// Decompiled from classes.dex (SourceFile: Session$PermissionsPair.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$PermissionsPair {
    // Fields
    java.util.List declinedPermissions;
    java.util.List grantedPermissions;

    // Methods
    public Session$PermissionsPair(java.util.List<String> p0, java.util.List<String> p1)
    {
      super();
      this.grantedPermissions = p0;
      this.declinedPermissions = p1;
    }

    public java.util.List<String> getDeclinedPermissions()
    {
      return this.declinedPermissions;
    }

    public java.util.List<String> getGrantedPermissions()
    {
      return this.grantedPermissions;
    }

}
