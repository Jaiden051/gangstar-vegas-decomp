// Decompiled from classes.dex (SourceFile: AccountPicker.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common;

public final class AccountPicker {
    // Methods
    private AccountPicker()
    {
      super();
    }

    public static android.content.Intent a(
            android.accounts.Account p0,
            java.util.ArrayList<android.accounts.Account> p1,
            String[] p2,
            boolean p3,
            String p4,
            String p5,
            String[] p6,
            android.os.Bundle p7,
            boolean p8)
    {
      return a(p0, p1, p2, p3, p4, p5, p6, p7, p8, 0, 0);
    }

    public static android.content.Intent a(
            android.accounts.Account p0,
            java.util.ArrayList<android.accounts.Account> p1,
            String[] p2,
            boolean p3,
            String p4,
            String p5,
            String[] p6,
            android.os.Bundle p7,
            boolean p8,
            int p9,
            int p10)
    {
      android.content.Intent v11;
      v11 = new android.content.Intent();
      v11.setAction("com.google.android.gms.common.account.CHOOSE_ACCOUNT");
      v11.setPackage("com.google.android.gms");
      v11.putExtra("allowableAccounts", p1);
      v11.putExtra("allowableAccountTypes", p2);
      v11.putExtra("addAccountOptions", p7);
      v11.putExtra("selectedAccount", p0);
      v11.putExtra("alwaysPromptForAccount", p3);
      v11.putExtra("descriptionTextOverride", p4);
      v11.putExtra("authTokenType", p5);
      v11.putExtra("addAccountRequiredFeatures", p6);
      v11.putExtra("setGmsCoreAccount", p8);
      v11.putExtra("overrideTheme", p9);
      v11.putExtra("overrideCustomTheme", p10);
      return v11;
    }

    public static android.content.Intent newChooseAccountIntent(
            android.accounts.Account p0,
            java.util.ArrayList<android.accounts.Account> p1,
            String[] p2,
            boolean p3,
            String p4,
            String p5,
            String[] p6,
            android.os.Bundle p7)
    {
      return a(p0, p1, p2, p3, p4, p5, p6, p7, false);
    }

}
