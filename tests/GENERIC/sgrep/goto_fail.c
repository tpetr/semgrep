
int foo() {
if (0)
  goto fail;

if (1)
  goto fail;
  goto fail;

if (2)
  goto fail;


fail:
  return 0;
}
