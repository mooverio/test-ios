[Uno.Compiler.UxGenerated]
public partial class LoginPage: Fuse.Controls.Page
{
    global::Uno.UX.NameTable __g_nametable;
    static string[] __g_static_nametable = new string[] {
    };
    static LoginPage()
    {
    }
    [global::Uno.UX.UXConstructor]
    public LoginPage()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        __g_nametable = new global::Uno.UX.NameTable(null, __g_static_nametable);
        var temp = new Fuse.Reactive.JavaScript(__g_nametable);
        var temp1 = new Fuse.Controls.Text();
        temp.LineNumber = 2;
        temp.FileName = "LoginPage.ux";
        temp.File = new global::Uno.UX.BundleFileSource(import global::Uno.IO.BundleFile("../../../../../LoginPage.js"));
        temp1.Value = "Logged in!";
        __g_nametable.This = this;
        this.Children.Add(temp);
        this.Children.Add(temp1);
    }
}
