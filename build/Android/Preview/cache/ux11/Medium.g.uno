[Uno.Compiler.UxGenerated]
public partial class Medium: Fuse.Controls.Text
{
    static Medium()
    {
    }
    [global::Uno.UX.UXConstructor]
    public Medium()
    {
        InitializeUX();
    }
    void InitializeUX()
    {
        this.TextWrapping = Fuse.Controls.TextWrapping.Wrap;
        this.FontSize = 25f;
        this.TextAlignment = Fuse.Controls.TextAlignment.Center;
        this.Color = Fuse.Drawing.Colors.White;
        this.Font = global::SignupOrLogin.Medium;
    }
}
